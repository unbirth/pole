#ifndef QUESTION_H
#define QUESTION_H

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

#endif // QUESTION_H
