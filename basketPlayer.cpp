#include "basketPlayer.h"


basketPlayer::basketPlayer(){
  name = "";
  hunger = 100;
  strength = 0;
  happy = 100;
}

void basketPlayer::theMenu(){
  cout << "--------------------------------------------------" << endl;
  cout << "Select Option." << endl;
  cout << "0: Save and exit." << endl;
  cout << "1: Train " << name << endl;
  cout << "2: Feed " <<  name << endl;
  cout << "3: Send " << name << " to their match." << endl;
  cout << "4: Make " << name << " practice dunking" << endl;
  cout << "5: Make " << name << " practice freethrows" << endl;
  cout << "6: Make " << name << " practice three pointers" << endl;
  cout << "--------------------------------------------------" << endl;
  
  
}


void basketPlayer::dunking(){
  happy += 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced dunking." << endl;
  cout << "            ________ " << endl;
  cout << "    o      |   __   |" << endl;
  cout << "      \_ O |  |__|  |" << endl;
  cout << "   ____/ \ |___WW___|" << endl;
  cout << "   __/         || " << endl;
  cout << "               || " << endl;
  cout << "               || " << endl;
  
  cout << "--------------------------------------------------" << endl; //50
}

void basketPlayer::freethrows(){
  strength += 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced freethrows." << endl;
  cout << "|__  o" << endl;
  cout << "| W    "  << endl;
  cout << "|           "  << endl;
  cout << "|             " << endl;
  cout << "|              \O" << endl;
  cout << "|               |" << endl;
  cout << "|              /|" << endl;
  
  cout << "--------------------------------------------------" << endl; //50
}

void basketPlayer::threePoint(){
  hunger -= 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced three pointers." << endl;
  cout << "|__  o " << endl;
  cout << "| W     "  << endl;
  cout << "|                   "  << endl;
  cout << "|                     " << endl;
  cout << "|                       \O" << endl;
  cout << "|                        |" << endl;
  cout << "|                       /|" << endl;
  
  cout << "--------------------------------------------------" << endl; //50
}



void basketPlayer::showStats(){
  cout << "--------------------------------------------------" << endl;
  Athlete::showStats();
}
