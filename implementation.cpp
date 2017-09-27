#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

	string Game::getName()
	{
		return name;
	}
	void Game::setName(string n)
	{
		name = n;
	}
	float Game::getPlaytime()
	{
		return playtime;
	}
	void Game::setPlaytime(float p)
	{
		playtime = p;
	}
	Game::Game(string n, float p)
	{
		name = n;
		playtime = p;
	}

