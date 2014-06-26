#ifndef _STATISTICS_H_
#define _STATISTICS_H_
#include <string>
#include <vector>
using namespace std;

class Statistics {
private:
	int passingTouchdowns, rushingTouchdowns, receivingTouchdowns, interceptions, rushingYards, passingYards, receivingYards, catches, tackles;
	double sacks, playerRating, necessityOfSigning;
	

public:
	Statistics(string choice, string searchName, string searchPosition);

	int getPassingTouchdowns();
	void setPassingTouchdowns(int p_t);
	int getRushingTouchdowns();
	void setRushingTouchdowns(int ru_t);
	int getReceivingTouchdowns();
	void setReceivingTouchdowns(int re_t);
	int getInterceptions();
	void setInterceptions(int i);
	int getRushingYards();
	void setRushingYards(int ru_y);
	int getPassingYards();
	void setPassingYards(int p_y);
	int getReceivingYards();
	void setReceivingYards(int re_y);
	int getTackles();
	void setTackles(int t);
	double getSacks();
	void setSacks(double s);
	int getCatches();
	void setCatches(int c);
	double getPlayerRating();
	double getNecessityOfSigning();


};

#endif