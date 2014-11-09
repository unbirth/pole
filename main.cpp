#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <question.h>
using namespace std;

int main()
{
    Question x;
    char c;
    x.Form("What's evil?", "television");
    x.ShowQuestion();
    while(true)
    {
       cin >> c;
       if(x.CheckLetter(c))
           cout << "Congratulations!\n";
       else
           cout << "Try again\n\n";
       x.ShowQuestion();
    }


    return 0;
}

