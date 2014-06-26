#ifndef _PLAYERRATING_H_
#define _PLAYERRATING_H_

using namespace std;

class PlayerRating{
private:
	int passingTouchdowns, rushingTouchdowns, receivingTouchdowns, interceptions, rushingYards, passingYards, receivingYards, catches, tackles, fumbles;
	double sacks, comp_percent, passer_rating, playerRating, necessityOfSigning;

public:
	double CB_rating(int interceptions, int tackles);
	double Safety_rating(int interceptions, int tackles);
	double LB_rating(int tackles, double sacks, int interceptions);
	double DL_rating(double sacks);
	double QB_rating(int rushingYards, int rushingTouchdowns, int passingYards, int passingTouchdowns, double comp_percent, double passer_rating, int interceptions);
	double RB_rating(int rushingYards, int rushingtouchdowns, int fumbles);
	double WR_rating(int receivingYards, int receivingTouchdowns);

};

#endif