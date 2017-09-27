#ifndef GAME_H
#define GAME_H
#include <string>
using namespace std;
class Game
{
private:
string name = "";
float playtime = 0.0;

public:
Game(string n, float p);
string getName();
void setName(string n);
float getPlaytime();
void setPlaytime(float p);
};
#endif
