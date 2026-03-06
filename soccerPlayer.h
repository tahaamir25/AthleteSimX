#ifndef SOCCERPLAYER_H
#define SOCCERPLAYER_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Athlete.h"

using namespace std;


class soccerPlayer : public Athlete {
public:
soccerPlayer(); //default constructor
void freekicks(); //happy goes up because they enjoy
void penalties(); //strength goes up in terms of confidence
void passing(); //hunger goes down gets hungry


//void nextDay(int); // 3 rounds will make day pass and an action passes as well
void theMenu();
void showStats(); // shows the amount of strength, hunger, happiness


};

#endif