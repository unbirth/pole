#include "base.h"
#include <iostream>
#include <question.h>
#include <base.h>
#include <stdio.h>

using namespace std;

Base::Base()
{
    string a, q;
    freopen("output.txt","w",stdout);
    cout << "FULLFILLING THE BASE\nInput amount of the questions: ";
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
