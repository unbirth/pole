#ifndef GAME_H
#define GAME_H
#include <base.h>
#include <question.h>
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class Game
{
private:
    Base base;
    string playerName;
    int points;
    pair <char, bool>* alphabet;

public:
    Game();
    ~Game();

};

#endif // GAME_H
