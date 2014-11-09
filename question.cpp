#include "question.h"
#include <stdio.h>
using namespace std;

Question::Question()
{
    this->question = "";
    this->answer = "";
    this->length = 0;
    wasBefore = false;
    this->letters = new pair<char, bool>[answer.length()];
}

Question::~Question()
{
    delete letters;
}

void Question::Form(string question, string answer)
{
    this->question = question;
    this->answer = answer;
    this->length = answer.length();
    this->letters = new pair<char, bool>[this->length];
    for (int i = 0; i < this->length; i++)
    {
        this->letters[i].first = this->answer[i];
        this->letters[i].second = false;
    }
}

void Question::ShowQuestion()
{
    printf("Question:\t%s\n", this->question.c_str());
    printf("Answer:\t%s\n", this->answer.c_str());
    printf("Letters\n");
    for(int i = 0; i < this->length; i++ )
    {
        printf("[%c] = %d\n", this->letters[i].first, this->letters[i].second);
    }
}

bool Question::CheckLetter(char letter)
{
    bool guessedAll = true;

    for(int i = 0; i < this->answer.length(); i++)
    {
        if(letters[i].first == letter) letters[i].second = true;
        if(!letters[i].second) guessedAll = false;
    }

    return guessedAll;
}
