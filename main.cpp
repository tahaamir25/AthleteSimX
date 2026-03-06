#include <iostream>
#include "Athlete.h"
#include "soccerPlayer.h"
#include "basketPlayer.h"
#include "boxer.h"
#include <fstream>
using namespace std;

int main() {
  
//THE GAME
//THE START MENU
cout << "Select 1 or 2" << endl;
cout << "========================" << endl;
cout << "1) Select Saved Athlete " << endl;
cout << "2) Make A New Athlete" << endl;
cout << "========================" << endl;

//Option 1
int theselection;
int menuselection;
int selection;
cin >> selection;

if (selection == 1){
  string oldName;
  int oldmenuselection;
  int oldHunger;
  int oldStrength;
  int oldHappy;
  cout << "Enter Filename" << endl;
  string filename;
  cin >> filename;
  ifstream fin(filename);
  
  while(!fin.is_open()) {
    cout << "Filename is incorrect or does not exist; Enter Correct Filename" << endl;
    cin >> filename;
  }

  while(!fin.eof()){
    getline(fin, oldName);
    fin >> oldmenuselection >> oldHunger >> oldStrength >> oldHappy;
    }
  
  fin.close();

if(oldmenuselection == 1){

  soccerPlayer a;
  a.setName(oldName);
  a.setHunger(oldHunger);
  a.setStrength(oldStrength);
  a.setHappy(oldHappy);
  a.showStats();

//LOOP TO ENSURE CODE RUNS ONCE
//AREA WHERE USER INTERACTS WITH ATHLETE
do{

  a.theMenu();
  cin >> menuselection;
  if(menuselection == 1){
    a.trainAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 2){
    a.feedAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 3){
    a.playAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 4){
    a.freekicks();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 5){
    a.penalties();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 6){
    a.passing();
    a.nextHour();
    a.showStats();
  }

  if(menuselection == 0){
    cout << "Enter Save Filename" << endl;
    string saveFile;
    cin >> saveFile;
    ofstream fout(saveFile);
    cout << "Game was saved. Exiting";
    fout << a.getName() << endl;
    fout << oldmenuselection << endl << a.getHunger() << endl << a.getStrength() << endl << a.getHappy();
    return 0;
  }
  if(menuselection > 6 || menuselection < 0){
    cout << "No Such Option. Exiting";
    return 0;
  }


  if(a.getHunger() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is hungry. Make sure they eat or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 20){
    cout << "===========" << endl;
    cout << "Your Athlete is weak. Make sure they stay in shape or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;  
  }
  
  if(a.getHappy() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is not happy. Make sure they enjoy themselves or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getHunger() < 0){
    a.retire();
    return 0;
  }
  if(a.getHunger() >= 100){
    a.setHunger(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Full!!" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 0){
    a.retire();
    return 0;
  }
  if(a.getStrength() >= 100){
    a.setStrength(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Insanely Strong!!" << endl;
    cout << endl;
  }

  if(a.getHappy() < 0){
    a.retire();
    return 0;
  }
  if(a.getHappy() >= 100){
    a.setHappy(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Super Happy!!" << endl;
    cout << endl;
  }
 
  }
  while(menuselection != 0);

  } 
  
if(oldmenuselection == 2){
  
  basketPlayer a;
  a.setName(oldName);
  a.setHunger(oldHunger);
  a.setStrength(oldStrength);
  a.setHappy(oldHappy);
  a.showStats();

//LOOP TO ENSURE CODE RUNS ONCE
//AREA WHERE USER INTERACTS WITH ATHLETE
do{

  a.theMenu();
  cin >> menuselection;
  if(menuselection == 1){
    a.trainAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 2){
    a.feedAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 3){
    a.playAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 4){
    a.dunking();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 5){
    a.freethrows();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 6){
    a.threePoint();
    a.nextHour();
    a.showStats();
  }

  if(menuselection == 0){
    cout << "Enter Save Filename" << endl;
    string saveFile;
    cin >> saveFile;
    ofstream fout(saveFile);
    cout << "Game was saved. Exiting";
    fout << a.getName() << endl;
    fout << oldmenuselection << endl << a.getHunger() << endl << a.getStrength() << endl << a.getHappy();
    return 0;;
  }
  if(menuselection > 6 || menuselection < 0){
    cout << "No Such Option. Exiting";
    return 0;;
  }



  if(a.getHunger() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is hungry. Make sure they eat or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 20){
    cout << "===========" << endl;
    cout << "Your Athlete is weak. Make sure they stay in shape or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;  
  }
  
  if(a.getHappy() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is not happy. Make sure they enjoy themselves or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getHunger() < 0){
    a.retire();
    return 0;
  }
  if(a.getHunger() >= 100){
    a.setHunger(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Full!!" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 0){
    a.retire();
    return 0;
  }
  if(a.getStrength() >= 100){
    a.setStrength(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Insanely Strong!!" << endl;
    cout << endl;
  }

  if(a.getHappy() < 0){
    a.retire();
    return 0;
  }
  if(a.getHappy() >= 100){
    a.setHappy(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Super Happy!!" << endl;
    cout << endl;
  }
    
  }
  while(menuselection != 0);
  }

  
if(oldmenuselection == 3){

  boxer a;
  a.setName(oldName);
  a.setHunger(oldHunger);
  a.setStrength(oldStrength);
  a.setHappy(oldHappy);
  a.showStats();

//LOOP TO ENSURE CODE RUNS ONCE
//AREA WHERE USER INTERACTS WITH ATHLETE
do{

  a.theMenu();
  cin >> menuselection;
  if(menuselection == 1){
    a.trainAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 2){
    a.feedAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 3){
    a.playAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 4){
    a.heavybag();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 5){
    a.sparring();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 6){
    a.jumprope();
    a.nextHour();
    a.showStats();
  }

  if(menuselection == 0){
    cout << "Enter Save Filename" << endl;
    string saveFile;
    cin >> saveFile;
    ofstream fout(saveFile);
    cout << "Game was saved. Exiting";
    fout << a.getName() << endl;
    fout << oldmenuselection << endl << a.getHunger() << endl << a.getStrength() << endl << a.getHappy();
    return 0;;
  }
  if(menuselection > 6 || menuselection < 0){
    cout << "No Such Option. Exiting";
    return 0;;
  }


  if(a.getHunger() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is hungry. Make sure they eat or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 20){
    cout << "===========" << endl;
    cout << "Your Athlete is weak. Make sure they stay in shape or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;  
  }
  
  if(a.getHappy() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is not happy. Make sure they enjoy themselves or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getHunger() < 0){
    a.retire();
    return 0;
  }
  if(a.getHunger() >= 100){
    a.setHunger(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Full!!" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 0){
    a.retire();
    return 0;
  }
  if(a.getStrength() >= 100){
    a.setStrength(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Insanely Strong!!" << endl;
    cout << endl;
  }

  if(a.getHappy() < 0){
    a.retire();
    return 0;
  }
  if(a.getHappy() >= 100){
    a.setHappy(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Super Happy!!" << endl;
    cout << endl;
  }
  
  }
  while(menuselection != 0);
  }
  
  
}


  
//======================================================


  
else if(selection == 2){
  cout << "PICK YOUR ATHLETE: " << endl;
  cout << "1: Soccer Player" << endl;
  cout << "2: Basketball Player" << endl;
  cout << "3: Boxer" << endl;
  cin >> theselection;

if(theselection == 1){
  cout << "Your Athlete is a: Soccer Player" << endl;
  cout << "Type in a name:" << endl; 
  string _name;
  cin >> _name;
  soccerPlayer a;
  a.setName(_name);

//LOOP TO ENSURE CODE RUNS ONCE
//AREA WHERE USER INTERACTS WITH ATHLETE
do{

  a.theMenu();
  cin >> menuselection;
  if(menuselection == 1){
    a.trainAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 2){
    a.feedAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 3){
    a.playAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 4){
    a.freekicks();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 5){
    a.penalties();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 6){
    a.passing();
    a.nextHour();
    a.showStats();
  }

  if(menuselection == 0){
    cout << "Enter Save Filename" << endl;
    string saveFile;
    cin >> saveFile;
    ofstream fout(saveFile);
    cout << "Game was saved. Exiting";
    fout << a.getName() << endl;
    fout << theselection << endl << a.getHunger() << endl << a.getStrength() << endl << a.getHappy();
    return 0;;
  }
  if(menuselection > 6 || menuselection < 0){
    cout << "No Such Option. Exiting";
    return 0;;
  }


  if(a.getHunger() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is hungry. Make sure they eat or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 20){
    cout << "===========" << endl;
    cout << "Your Athlete is weak. Make sure they stay in shape or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;  
  }
  
  if(a.getHappy() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is not happy. Make sure they enjoy themselves or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getHunger() < 0){
    a.retire();
    return 0;
  }
  if(a.getHunger() >= 100){
    a.setHunger(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Full!!" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 0){
    a.retire();
    return 0;
  }
  if(a.getStrength() >= 100){
    a.setStrength(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Insanely Strong!!" << endl;
    cout << endl;
  }

  if(a.getHappy() < 0){
    a.retire();
    return 0;
  }
  if(a.getHappy() >= 100){
    a.setHappy(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Super Happy!!" << endl;
    cout << endl;
  }
 
  }
  while(menuselection != 0);

  } 
  
if(selection == 2){
  cout << "Your Athlete is a: Basketball Player" << endl;
  cout << "Type in a name:" << endl; 
  string _name;
  cin >> _name;
  basketPlayer a;
  a.setName(_name);

//LOOP TO ENSURE CODE RUNS ONCE
//AREA WHERE USER INTERACTS WITH ATHLETE
do{

  a.theMenu();
  cin >> menuselection;
  if(menuselection == 1){
    a.trainAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 2){
    a.feedAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 3){
    a.playAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 4){
    a.dunking();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 5){
    a.freethrows();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 6){
    a.threePoint();
    a.nextHour();
    a.showStats();
  }

  if(menuselection == 0){
    cout << "Enter Save Filename" << endl;
    string saveFile;
    cin >> saveFile;
    ofstream fout(saveFile);
    cout << "Game was saved. Exiting";
    fout << a.getName() << endl;
    fout << theselection << endl << a.getHunger() << endl << a.getStrength() << endl << a.getHappy();
    return 0;
  }
  if(menuselection > 6 || menuselection < 0){
    cout << "No Such Option. Exiting";
    return 0;
  }



  if(a.getHunger() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is hungry. Make sure they eat or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 20){
    cout << "===========" << endl;
    cout << "Your Athlete is weak. Make sure they stay in shape or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;  
  }
  
  if(a.getHappy() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is not happy. Make sure they enjoy themselves or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getHunger() < 0){
    a.retire();
    return 0;
  }
  if(a.getHunger() >= 100){
    a.setHunger(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Full!!" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 0){
    a.retire();
    return 0;
  }
  if(a.getStrength() >= 100){
    a.setStrength(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Insanely Strong!!" << endl;
    cout << endl;
  }

  if(a.getHappy() < 0){
    a.retire();
    return 0;
  }
  if(a.getHappy() >= 100){
    a.setHappy(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Super Happy!!" << endl;
    cout << endl;
  }
    
  }
  while(menuselection != 0);
  }

  
if(selection == 3){
  cout << "Your Athlete is a: Boxer" << endl;
  cout << "Type in a name:" << endl; 
  string _name;
  cin >> _name;
  boxer a;
  a.setName(_name);

//LOOP TO ENSURE CODE RUNS ONCE
//AREA WHERE USER INTERACTS WITH ATHLETE
do{

  a.theMenu();
  cin >> menuselection;
  if(menuselection == 1){
    a.trainAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 2){
    a.feedAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 3){
    a.playAthlete();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 4){
    a.heavybag();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 5){
    a.sparring();
    a.nextHour();
    a.showStats();
  }
  if(menuselection == 6){
    a.jumprope();
    a.nextHour();
    a.showStats();
  }

  if(menuselection == 0){
    cout << "Enter Save Filename" << endl;
    string saveFile;
    cin >> saveFile;
    ofstream fout(saveFile);
    cout << "Game was saved. Exiting";
    fout << a.getName() << endl;
    fout << theselection << endl << a.getHunger() << endl << a.getStrength() << endl << a.getHappy();
    return 0;
  }
  
  if(menuselection > 6 || menuselection < 0){
    cout << "No Such Option. Exiting";
    return 0;
  }


  if(a.getHunger() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is hungry. Make sure they eat or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 20){
    cout << "===========" << endl;
    cout << "Your Athlete is weak. Make sure they stay in shape or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;  
  }
  
  if(a.getHappy() < 30){
    cout << "===========" << endl;
    cout << "Your Athlete is not happy. Make sure they enjoy themselves or they might retire! CAN'T GO BELOW 0" << endl;
    cout << endl;
  }
  
  if(a.getHunger() < 0){
    a.retire();
    return 0;
  }
  if(a.getHunger() >= 100){
    a.setHunger(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Full!!" << endl;
    cout << endl;
  }
  
  if(a.getStrength() < 0){
    a.retire();
    return 0;
  }
  if(a.getStrength() >= 100){
    a.setStrength(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Insanely Strong!!" << endl;
    cout << endl;
  }

  if(a.getHappy() < 0){
    a.retire();
    return 0;
  }
  if(a.getHappy() >= 100){
    a.setHappy(100);
    cout << "===========" << endl;
    cout << "Your Athlete Is Super Happy!!" << endl;
    cout << endl;
  }
  
  }
  while(menuselection != 0);
  }
  }
  
  


  
  





  
   return 0;
  }
  
