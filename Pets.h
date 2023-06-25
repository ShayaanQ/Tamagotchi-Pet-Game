#ifndef PETS_H
#define PETS_H
#include <string>
using namespace std;

class Pets{
protected:
string type;
string name;
int sleep;
int hunger;
int happiness;
public:
Pets(){
  hunger = 50;
  sleep = 50;
  happiness = 50;
}

virtual void setType(string t){
  type = t;
}
virtual string getType(){
  return type;
}
virtual void setHunger(int h){
  hunger = h;
}
virtual void setSleep(int s){
  sleep = s;
}
virtual void setHappiness(int ha){
  happiness = ha;
}
virtual void setName(string n){
  name = n;
}
virtual string getName(){
  return name;
}
virtual int getHunger(){
  return hunger;
}
virtual int getSleep(){
  return sleep;
}
virtual int getHappiness(){
  return happiness;
}
virtual void napTime(){
  sleep = 0;
  happiness -= 5;
}
virtual void playTime(){
  happiness = 100;
  hunger += 10;
}
virtual void feedTime(){
   hunger = 0;
  sleep += 15;
}






};
#endif
