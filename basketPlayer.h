#ifndef BASKETPLAYER_H
#define BASKETPLAYER_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Athlete.h"

using namespace std;


class basketPlayer : public Athlete {
public:
basketPlayer(); //default constructor
void dunking(); //happy goes up because they enjoy
void freethrows(); //strength goes up in terms of confidence
void threePoint(); //hunger goes down gets hungry


//void nextDay(int); // 3 rounds will make day pass and an action passes as well
void theMenu();
void showStats(); // shows the amount of strength, hunger, happiness


};

#endif