#include "Player.h"

Player::Player(string n, string p, string tm) {
	name = n;
	position = p;
	team = tm;
}

string Player::getName(){ return name; }
string Player::getPosition(){ return position; }
string Player::getTeam(){ return team; }
void Player::addPlayer(string n, string p, string tm){ n = name; p = position; tm = team; }