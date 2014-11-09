#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//commit?

class Question                                      //В этом классе хранится один вопрос
{
private:
    string question;                                //Вопрос
    string answer;                                  //Ответ
    pair <char, bool>* letters;                     //Пары: буква слова - была ли угадана
    bool wasBefore;                                 //Было ли это слово загадано ранее

public:
    Question();
    ~Question();                                    //Массив у нас один - letters, очищаем память

    void Form(string question, string answer);      //Формируем новый вопрос, грубо говоря - конструктор с параметрами
    void ShowQuestion();                            //Вывод на экран, отладочная функция
    bool CheckLetter(char letter);                  //Угадывание буквы; todo: доработать эту функцию
    void CheckWord(string word);                    //Угадывание целого слова; todo: дописать
};

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

