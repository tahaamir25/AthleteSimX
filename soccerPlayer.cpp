#include "soccerPlayer.h"


soccerPlayer::soccerPlayer(){
  name = "";
  hunger = 100;
  strength = 0;
  happy = 100;
}

void soccerPlayer::theMenu(){
  cout << "--------------------------------------------------" << endl;
  cout << "Select Option." << endl;
  cout << "0: Save and exit." << endl;
  cout << "1: Train " << name << endl;
  cout << "2: Feed " <<  name << endl;
  cout << "3: Send " << name << " to their match." << endl;
  cout << "4: Make " << name << " practice freekicks" << endl;
  cout << "5: Make " << name << " practice penalties" << endl;
  cout << "6: Make " << name << " practice passing" << endl;
  cout << "--------------------------------------------------" << endl;
  
  
}


void soccerPlayer::freekicks(){
  happy += 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced freekicks." << endl;  
  cout << "                   ___ " << endl;
  cout << " o__              |   |\ " << endl;
  cout << "/|                |   |X\ " << endl;
  cout << "/ > o             |   |XX\ " << endl;
  
  cout << "--------------------------------------------------" << endl; //50
}

void soccerPlayer::penalties(){
  strength += 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced penalty kicks." << endl; 
  cout << "   \O                                     ,  __" << endl;
  cout << "   /\                                   O/  |xx|\ " << endl;
  cout << "__/\ `                                  /\  |xx|X\ " << endl;
  cout << "    \, o                                 << |xx|XX\ " << endl;
  
  cout << "--------------------------------------------------" << endl; //50
}

void soccerPlayer::passing(){
  hunger -= 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced passing." << endl;
  cout << " o__        o__" << endl;
  cout << "/|          /\ " << endl;
  cout << "/ > o        <\ " << endl;
    
  cout << "--------------------------------------------------" << endl;
}



void soccerPlayer::showStats(){
  cout << "--------------------------------------------------" << endl;
  Athlete::showStats();
}
