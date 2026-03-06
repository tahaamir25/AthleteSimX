#ifndef ATHLETE_H
#define ATHLETE_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;


class Athlete{
public:
Athlete(); //default constructor
//setters
void setName(string theName);
void setHunger(int theHunger);
void setStrength(int theStrength);
void setHappy(int theHappy);
//getters
string getName();
int getHunger();
int getStrength();
int getHappy();
//functions
void trainAthlete(); //increases Athlete strength but lowers hunger
void feedAthlete(); //increases hunger but lowers happy; lack of training
void playAthlete(); //athlete will play game; increases happy; lowers strength and hunger
void retire();
void nextHour(); // after every selection an action passes as well
virtual void showStats(); // shows the amount of strength, hunger, happiness

protected: //for derived athletes or classes
string name;
int hunger;
int strength;
int happy;
};

#endif