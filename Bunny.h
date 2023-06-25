#include "Pets.h"
#pragma once
using namespace std;
#include <iostream>

class Bunny : public Pets{
public:
Bunny(string n, string t){
  name = n;
  type = t;
  happiness = 30;
  sleep = 50;
  hunger = 100;
}

void setType(string t){
  type = t;
}
string getType(){
  return type;
}
void setName(string n){
  name = n;
}
string getName(){
  return name;
}
void setHunger(int h){
  hunger = h;
}
void setSleep(int s){
  sleep = s;
}
void setHappiness(int ha){
  happiness = ha;
}
int getHunger(){
  return hunger;
}

int getSleep(){
  return sleep;
}

int getHappiness(){
  return happiness;
}


 void napTime(){
  sleep = 0;
  happiness -= 5;
}
 void playTime(){
  happiness = 100;
  hunger += 10;
}
 void feedTime(){
   hunger = 0;
  sleep += 15;
}


};