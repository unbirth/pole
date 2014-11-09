#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//commit?

class Question
{
private:
    string question;
    string answer;
    pair <char, bool>* letters;
    bool wasBefore;

public:
    Question();
    ~Question();

    void Form(string question, string answer);
    void ShowQuestion();
    bool CheckLetter(char letter);
    void CheckWord(string word);
};

Question::Question()
{
    this->question = "";
    this->answer = "";
    wasBefore = false;

    this->letters = new pair<char, bool>[answer.length()];
    for (int i = 0; i < answer.length(); i++)
    {
        letters[i].first = answer[i];
        letters[i].second = false;
    }
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



class Base
{
private:
    Question* base;
    int amount;

public:
    Base();
    Base(int amount);
    ~Base();


};

Base::Base()
{
    string a, q;
    cout << "Input amount of the questions: ";
    cin >> this->amount;
    this->base = new Question[this->amount];
    for(int i = 0; i < this->amount; i++)
    {
        cout << "Question #" << i + 1 << ":\t";
        cin >> q;
        cout << "Answer #" << i + 1 << ":\t";
        cin >> a;
        cout << endl;
        this->base[i].Form(q, a);
    }
}

Base::~Base()
{
    delete this->base;
}

void FormFile(string filename);
void ReadFile(string filename);

int main()
{
    Question x;
    char c;
    x.Form("What's evil?", "television");
    while(true)
    {
       cin >> c;
       if(x.CheckLetter(c))
           cout << "Congratulations!\n";
       else
           cout << "Try again";
    }


    return 0;
}

