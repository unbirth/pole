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
    pair <char, bool> alphabet[26];
    int points;

public:
    Game();
    Game(string name);
    ~Game();
    void setName(string name);
    void addPoints(int points);
    void resetGame();
    void resetAlphabet();
    int rollDice();
};

#endif // GAME_H
