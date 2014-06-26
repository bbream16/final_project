#include "PlayerRating.h"


/////all the random-looking numbers were based on specific stats. I took how much I valued a stat per position
/////(CB's were 65% interceptions, 35% tackles) and those numbers were divided by the league leader's stats.
/////(65 / the league-leading 8 interceptions is 8.125)
/////   THUS
///// A player only receives a perfect rating of 100 IF they led the league in each statistical category for their position
double PlayerRating::CB_rating(int interceptions, int tackles){
	double CB_rating;
	(interceptions*8.125) + (tackles*0.3763) == CB_rating;
	return CB_rating;
}
///// Safety's were 60% tackles, 40% interceptions
double PlayerRating::Safety_rating(int interceptions, int tackles){
	double Safety_rating;
	(interceptions*6.66666) + (tackles*0.5217) == Safety_rating;
	return Safety_rating;
}
//////LB's were 45% tackles, 35% sacks, and 20% interceptions
double PlayerRating::LB_rating(int tackles, double sacks, int interceptions){
	double LB_rating;
	(tackles*0.2632) + (sacks*1.7949) + (interceptions*3.33333) == LB_rating;
	return LB_rating;
}
//////// DL were 100% sacks, which provides skewed ratings, I know
double PlayerRating::DL_rating(double sacks){
	double DL_rating;
	(sacks*5.2632) == DL_rating;
	return DL_rating;
}
//////QB's were 5% rushing yards, 5% rushing touchdowns, 30% passing yards, 30% passing touchdowns, 30% completion percentage, 10% passer rating (a recorded stat), and then interceptions * -0.5 so no one goes over a rating of 100
double PlayerRating::QB_rating(int rushingYards, int rushingTouchdowns, int passingYards, int passingTouchdowns, double comp_percent, double passer_rating, int interceptions){
	double QB_rating;
	(rushingYards*0.0085) + (rushingTouchdowns*0.833333) + (passingYards*0.0055) + (passingTouchdowns*0.545454) + (comp_percent*0.4317) + (passer_rating*0.087) + (interceptions*-0.5) == QB_rating;
	return QB_rating;
}
//////RB's were 55% rushing yards, 55% rushing touchdowns, and fumbles * -2 so no one gets a rating of more than 100
double PlayerRating::RB_rating(int rushingYards, int rushingtouchdowns, int fumbles){
	double RB_rating;
	(rushingYards*0.0342) + (rushingtouchdowns*4.5833333) + (fumbles*-2) == RB_rating;
	return RB_rating;
}
///////WR's were 55% receiving yards and 45% receiving touchdowns
double PlayerRating::WR_rating(int receivingYards, int receivingTouchdowns){
	double WR_rating;
	(receivingYards*0.0334) + (receivingTouchdowns*3.2143) == WR_rating;
	return WR_rating;
}