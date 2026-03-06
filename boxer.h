#ifndef BOXER_H
#define BOXER_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Athlete.h"

using namespace std;


class boxer : public Athlete {
public:
boxer(); //default constructor
void heavybag(); //happy goes up because they enjoy
void sparring(); //strength goes up in terms of confidence
void jumprope(); //hunger goes down gets hungry


//void nextDay(int); // 3 rounds will make day pass and an action passes as well
void theMenu();
void showStats(); // shows the amount of strength, hunger, happiness


};

#endif