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
    ~Base();

    void Load(string filename);
};

#endif // BASE_H
