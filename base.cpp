#include "base.h"

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
