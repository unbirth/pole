#include "game.h"

Game::Game()
{
    this->base.LoadQuestion();//TODO: finish it!!!
}

Game::~Game()
{
    delete alphabet;
}
