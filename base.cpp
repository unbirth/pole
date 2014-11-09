#include "base.h"
#include <iostream>
#include <question.h>
#include <base.h>
#include <stdio.h>

using namespace std;

Base::Base()
{
    string a, q;
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w",stdout);

    cin >> this->amount;
    this->base = new Question[this->amount];

    for(int i = 0; i < this->amount; i++)
    {
        cout << "Question #" << i + 1 << ":\t";
        getline(cin, q); cout << q;
        cout << "\nAnswer #" << i + 1 << ":\t";
        getline(cin, a); cout << a;
        cout << endl;
        this->base[i].Form(q, a);
    }

    fclose(stdin);
   // fclose(stdout);
}

Base::~Base()
{
    delete this->base;
}
