// client
#include "Game.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
float playtime;
vector <Game> v1;
for(int i=0; i<4; i++)
	{
		cout << "Enter game name"<< endl;
		cin >> name;
		cout << "Enter playtime"<< endl;
		cin >> playtime;

		Game newG(name, playtime);
		v1.push_back(newG);
	}
	cout << endl;
for (auto v:v1)
{
cout <<v.getName()<<" "<<v.getPlaytime()<<endl;
}
}
