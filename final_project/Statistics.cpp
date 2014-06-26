#include  "Statistics.h"



int Statistics::getPassingTouchdowns() { return passingTouchdowns; }
void Statistics::setPassingTouchdowns(int p_t){ p_t = passingTouchdowns; }
int Statistics::getRushingTouchdowns() { return rushingTouchdowns; }
void Statistics::setRushingTouchdowns(int ru_t){ ru_t = rushingTouchdowns; }
int Statistics::getReceivingTouchdowns() { return receivingTouchdowns; }
void Statistics::setReceivingTouchdowns(int re_t){ re_t = receivingTouchdowns; }
int Statistics::getInterceptions() { return interceptions; }
void Statistics::setInterceptions(int i){ i = interceptions; }
int Statistics::getRushingYards() { return rushingYards; }
void Statistics::setRushingYards(int ru_y){ ru_y = rushingYards; }
int Statistics::getPassingYards() { return passingYards; }
void Statistics::setPassingYards(int p_y){ p_y = passingYards; }
int Statistics::getReceivingYards() { return receivingYards; }
void Statistics::setReceivingYards(int re_y){ re_y = receivingYards; }
int Statistics::getTackles() { return tackles; }
void Statistics::setTackles(int t){ t = tackles; }
double Statistics::getSacks() { return sacks; }
void Statistics::setSacks(double s){ s = sacks; }
int Statistics::getCatches() { return catches; }
void Statistics::setCatches(int c){ c = catches; }
double Statistics::getPlayerRating() { return playerRating; }



double Statistics::getNecessityOfSigning() { return necessityOfSigning; }