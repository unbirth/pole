#include "game.h"
#include <iostream>
#include <stdio.h>
#include <base.h>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

Game::Game()
{
    this->playerName = "Аноним Анонимыч";
    this->resetGame();
}

Game::Game(string name)
{
    setName(name);
    this->resetGame();
}

Game::~Game()
{
    delete alphabet;
}

void Game::resetGame()
{
    this->base.LoadQuestion();
    this->points = 0;
    resetAlphabet();
}

void Game::resetAlphabet()
{
    for(char i = 'a'; i <= 'z'; i++)
    {
        this->alphabet[i-'a'].first = i;
        this->alphabet[i-'a'].second = false;
    }
}

void Game::setName(string name)
{
    this->playerName = name;
}

void Game::addPoints(int points)
{
    this->points += points;
}

int Game::rollDice()
{
    srand(time(NULL));
    int value = 720 + rand()%720;
    return value;
}
