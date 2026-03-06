#include "boxer.h"


boxer::boxer(){
  name = "";
  hunger = 100;
  strength = 0;
  happy = 100;
}


void boxer::theMenu(){
  cout << "--------------------------------------------------" << endl;
  cout << "Select Option." << endl;
  cout << "0: Save and exit." << endl;
  cout << "1: Train " << name << endl;
  cout << "2: Feed " <<  name << endl;
  cout << "3: Send " << name << " to their match." << endl;
  cout << "4: Make " << name << " practice hitting the heavybag" << endl;
  cout << "5: Make " << name << " practice sparring" << endl;
  cout << "6: Make " << name << " practice jumproping" << endl;
  cout << "--------------------------------------------------" << endl;
  
  
}

void boxer::heavybag(){
  happy += 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced hitting the heavybag." << endl;
  cout << "      ___ " << endl;
  cout << " o__ |   | " << endl;
  cout << "<|   |   | " << endl;
  cout << "/ \   ___   " << endl;
  
  cout << "--------------------------------------------------" << endl; //50
}

void boxer::sparring(){
  strength += 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced sparring." << endl;
  cout << " o__  __o " << endl;
  cout << "<|      |> " << endl;
  cout << "/ \    / \   " << endl;
  
  cout << "--------------------------------------------------" << endl; //50
}

void boxer::jumprope(){
  hunger -= 5;
  cout << "--------------------------------------------------" << endl; //50
  
  cout << name << " has practiced jumproping." << endl;
  cout << "    _ _  " << endl;
  cout << "  /  o  \ " << endl;
  cout << " (- >|< -) " << endl;
  cout << "     >>   " << endl;

  
  cout << "--------------------------------------------------" << endl; //50
}



void boxer::showStats(){
  cout << "--------------------------------------------------" << endl;
  Athlete::showStats();
}
