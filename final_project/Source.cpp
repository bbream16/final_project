#include "Budget.h"
#include "Player.h"
#include "Statistics.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Statistics::Statistics(string choice, string searchName, string searchPosition) {

	/////////the two text files, one containing offensive players, on containing defensive players

	string filename;
	if (choice == "offense")
		filename = "C:\\Users\\Ben\\Desktop\\offensive_statistics.txt";
	else if (choice == "defense")
		filename = "C:\\Users\\Ben\\Desktop\\defensive_statistics.txt";

	ifstream stats(filename);
	string line;
	if (stats.fail())
		cout << "Unable to access the file!\n";
	else if (!stats.fail()) {
		while (!stats.eof()) {
			getline(stats, line);
			size_t pos;
			///////searches for the name entered, I failed to be able to search the rest of the line
			//////and retrieve a player's stats
			pos = line.find(searchName);
			if (pos != string::npos)
				cout << "\n\nFound!\n\n";

			else
				cout << "\n\nPlayer not found!\n\n";
		}
	}

}

int main(){
	cout << "Welcome to Ben's free agent advisory program!\nDo you need to know the value of a player? Or find out if you can afford them?\nMaybe you just need to know if you should re-structure their contract...\n\nEither way, this is the place for you!\n______________________________________________\n\n";


	char searchName[20];
	string searchPosition, choice;
	/////////////////////allows the user to search for a player's name
	cout << "Enter a player name and position to search.\nName: ";
	cin.getline(searchName, 20);
	cout << "\nPosition (QB, RB, CB, DE, etc.): ";
	cin >> searchPosition;

	////////to determine if the player is on offense or defense
	if (searchPosition == "DE" || searchPosition == "DT" || searchPosition == "DL" || searchPosition == "NT" || searchPosition == "CB" || searchPosition == "DB" || searchPosition == "FS" || searchPosition == "SS" || searchPosition == "S" || searchPosition == "LB" || searchPosition == "OLB" || searchPosition == "MLB")
		choice = "defense";
	else
		choice = "offense";

	if (choice == "offense")
		Statistics("offense", searchName, searchPosition);
	else if (choice == "defense")
		Statistics("defense", searchName, searchPosition);
	



}