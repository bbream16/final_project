#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
using namespace std;


class Player{
private:
	string name, position, team;

public:
	Player(string n, string p, string tm);

	string getName();
	string getPosition();
	string getTeam();
	void addPlayer(string n, string p, string tm);


};


#endif