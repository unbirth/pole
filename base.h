#ifndef BASE_H
#define BASE_H
#include <question.h>

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

#endif // BASE_H
