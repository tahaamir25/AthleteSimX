#include "Athlete.h"


Athlete::Athlete(){
  name = "";
  hunger = 100;
  strength = 0;
  happy = 100;
}
void Athlete::setName(string theName){
  name = theName;
}
void Athlete::setHunger(int theHunger){
  hunger = theHunger;
}
void Athlete::setStrength(int theStrength){
  strength = theStrength;
}
void Athlete::setHappy(int theHappy){
  happy = theHappy;
}

string Athlete::getName(){
  return name;
}
int Athlete::getHunger(){
  return hunger;
}
int Athlete::getStrength(){
  return strength;
}
int Athlete::getHappy(){
  return happy;
}


void Athlete::trainAthlete(){
  strength += 10;
  hunger -= 20;
  cout << "--------------------------------------------------" << endl; //50
  cout << name << " has trained. Feed them as well." << endl;
  cout << "--------------------------------------------------" << endl; //50
}

void Athlete::feedAthlete(){
  hunger += 20;
  happy -= 15;
  cout << "--------------------------------------------------" << endl; //50
  cout << name << " has ate. They want to play or train." << endl;
  cout << "--------------------------------------------------" << endl; //50
}

void Athlete::playAthlete(){
  happy += 20;
  strength -= 15;
  hunger -= 30;
  cout << "--------------------------------------------------" << endl; //50
  cout << name << " has play. They need to train and eat." << endl;
  cout << "--------------------------------------------------" << endl; //50
}

void Athlete::retire(){
  cout << name << " has retired." << endl;
  return 0;
}

void Athlete::nextHour(){
  int random;
  srand(time(0));
  random = 5 + (rand() % 10);
  happy += random;
  strength += random;
  hunger -= random;
    
}


void Athlete::showStats(){
  cout << "--------------------------------------------------" << endl;
  cout << "Happy: " << happy << endl;
  cout << "Strength: " << strength << endl;
  cout << "Hunger: " << hunger << endl;
  cout << "--------------------------------------------------" << endl;
}

