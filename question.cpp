#include "question.h"

Question::Question()
{
    this->question = "";
    this->answer = "";
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

    this->letters = new pair<char, bool>[answer.length()];
    for (int i = 0; i < this->answer.length(); i++)
    {
        this->letters[i].first = this->answer[i];
        this->letters[i].second = false;
    }
}

void Question::ShowQuestion()
{
    cout << "Question:\t" << this->question << endl;
    cout << "Answer:\t" << this->answer << endl;
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
