#include "Manage.h"
#include "Art.h"
#include "Pets.h"
#include "Dog.h"
#include "Bunny.h"
#include "Cat.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool Manage::menu(){
  Art art;
  art.drawMenu();
  int o;
  cin >> o;
  if(o == 1){
    if(create()){
      return true;
    }
    else{
      return false;
    }
  }
  else if(o == 2){
    if(load()){
      return true;
    }
    else{
      return false;
    }
  }
  else if(o == 3){
    exit(1);
  }
  else if(o == 4){
    art.drawTutorial();
    return false;
  }
  else{
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Not a valid input!" << endl << endl;
    cout << "Enter any key to return to menu!" << endl << endl;
    string key;
    cin >>  key;
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  
    return false;
  }
}

bool Manage::create(){
  
  Art art;
  Pets* pet;
  cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout << endl << endl << "What pet would you like to own?" << endl << endl;
  cout << "Enter 1 for dog!" << endl << endl;
  cout << "Enter 2 for cat!" << endl << endl;
  cout << "Enter 3 for bunny!" << endl << endl;
  cout << "Enter 4 to quit game!" << endl << endl;
  int choice;
  cin >> choice;
  if(choice == 1){
    string name;
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Great choice, dogs are very loyal companions and have unique starting attributes compared to the other pets!" << endl << endl;
    cout << "Dogs are naturally much happier pets and so they start the game with 100 happiness." << endl << endl;
    cout << "Because of their energetic nature however, dogs start the game with a high hunger level as well, at 80." << endl << endl;
    cout << "Now that the intro is out of the way, what would you like to name your bestfriend?" << endl << endl;
    art.drawDog();
    cin >> name;
    pet = new Dog(name, "Dog");
    if(!check(pet)){
      add(pet);
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " has been added to Play Land!" << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    else{
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " is already in Play Land!" << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  }
  if(choice == 2) {
    string name;
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Great choice, cats are extremely smart animals and have their own unique starting attributes compared to the other pets!" << endl << endl;
    cout << "Cats are naturally much more laid back, and so they start the game with 100 tiredness." << endl << endl;
    cout << "Because of this lack of energy however, cats also start the game with a low hunger level, at 30." << endl << endl;
    cout << "Now that the intro is out of the way, what would you like to name your feline friend?" << endl << endl;
    art.drawCat();
    cin >> name;
    pet = new Cat(name, "Cat");
    if(!check(pet)){
      add(pet);
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " has been added to Play Land!" << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    else{
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " is already in Play Land!" << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  }
  if(choice == 3){
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Great choice, Bunnys are adorable little pets that have their own unique starting attributes compared to the other pets!" << endl << endl;
    cout << "Bunnys love to eat, and so they start the game with 100 hunger." << endl << endl;
    cout << "Because of their constant need for food however, bunnys also start the game with a low happiness level, at 30." << endl << endl;
    cout << "Now that the intro is out of the way, what would you like to name this little speedster?" << endl << endl;
    art.drawBunny();
    string name;
    cin >> name;
    pet = new Bunny(name, "Bunny");
    if(!check(pet)){
      add(pet);
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " has been added to Play Land!" << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    else{
      cout << endl << "Your " << pet->getType() << " " << pet->getName() << " is already in Play Land!" << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
      return false;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  }
  if(choice == 4){
    exit(1);
  }
  else{ 
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << endl << endl << "Not a valid choice!" << endl;
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
    exit(0);
  }
  
  return false; 
}

void Manage::add(Pets* pet){
  string yourPet = pet->getType() + " " + pet->getName() + " " + to_string(pet->getHunger()) + " " + to_string(pet->getSleep()) + " " + to_string(pet->getHappiness());

  ofstream fout;

  fout.open("GAMEFILE.TXT", ios_base::app);

  if (!fout.is_open()) {
    cout << "File not found!" << endl;
  }

  fout << yourPet << endl;
  
  fout.close();

}

bool Manage::check(Pets* pet){
  string data;
  string petName = pet->getName();
  string petType = pet->getType();
  ifstream fin;
  
  fin.open("GAMEFILE.TXT");

  if(!fin.is_open()){
    cout << "File does not exist!" << endl;
  }

   while (!fin.eof()) {
     getline(fin, data); 
     istringstream ins(data);
     
     string type;
     ins >>  type;
     string name;
     ins >> name;
  
    if ((type == petType) && (name == petName)){
      fin.close();
      return true;
    }
    
  }
  
  fin.close();
  return false;
  
}

bool Manage::load() {
  Pets* pet = nullptr;
  cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout << endl << endl << "Welcome Back!" << endl << endl;
  cout << "What Pet would you like to continue with?" << endl << endl;
  pet = allPets();
  if(pet != nullptr) {
    play(pet);
    return false;
  }
  else{
    return false;
  }
}

bool Manage::play(Pets* pet){
  Art art;
 cout << endl << "Your adorable " << pet->getType() << " "  << pet->getName() 
 << " is ready to play!" << endl << endl;
 cout << "Loading " << pet->getName() << "'s " << "stats...." << endl << endl;
 cout << "Hunger Level: " << pet->getHunger() << endl << endl;
 cout << "Tiredness level: " << pet->getSleep() << endl << endl;
 cout << "Happiness level: " << pet->getHappiness() << endl << endl;
  cout << "Enter any key to continue!" << endl << endl;
  string k;
  cin >> k;
 
 bool game = true;

  while(game){
    cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl << "What action would you like to take?" << endl << endl;
    cout << "Enter 1 to feed " << pet->getName() << endl << endl;
    cout << "Enter 2 to play with " << pet->getName() << endl << endl;
    cout << "Enter 3 to put " << pet->getName() << " to sleep" << endl << endl;
    cout << "Enter 4 to progress to the next hour" << endl << endl;
    cout << "Enter 5 to Save your progress and quit" << endl << endl;
    int o;
    cin >> o;
    if(o == 1){
       cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Feeding " << pet->getName() << " apples..." << endl << endl;
      art.drawEat();
      pet->feedTime();
      cout << endl << pet->getName() << " is full!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Tiredness level: " << pet->getSleep() << endl << endl;
      cout << "Happiness level: " << pet->getHappiness() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(o == 2){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Playing with " << pet->getName() << " ..." << endl << endl;
      art.drawPlay();
      pet->playTime();
      cout << endl << pet->getName() << " played catch!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Tiredness level: " << pet->getSleep() << endl << endl;
      cout << "Happiness level: " << pet->getHappiness() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(o == 3){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Putting " << pet->getName() << " to sleep..." << endl << endl;
      art.drawSleep();
      pet->napTime();
      cout << endl << pet->getName() << " is fully rested!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Tiredness level: " << pet->getSleep() << endl << endl;
      cout << "Happiness level: " << pet->getHappiness() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(o == 4){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Progressing " << pet->getName() << " to next hour..." << endl << endl;
      art.drawRun();
      nextHour(pet);
      cout << endl << "Next hour reached!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s updated stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Tiredness level: " << pet->getSleep() << endl << endl;
      cout << "Happiness level: " << pet->getHappiness() << endl << endl;
      cout << "Enter any key to continue!" << endl << endl;
      string key;
      cin >> key;
    }
    if(pet->getHunger() > 50){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "STATUS REPORT:" << endl << endl;
      cout << pet->getName() << " is hungry!" << endl;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
    if(pet->getSleep() > 50){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "STATUS REPORT:" << endl << endl;
      cout << pet->getName() << " is sleepy!" << endl;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
    if(pet->getHappiness() < 50){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "STATUS REPORT:" << endl << endl;
      cout << pet->getName() << " is feeling down!" << endl;
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
    if(o == 5){
      cout << endl << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << endl << "Say goodbye to " << pet->getName() << ", saving progress..." << endl << endl;
      save(pet);
      cout << "Save successfull!" << endl << endl;
      cout << "Here are " << pet->getName() << "'s saved stats..." << endl << endl;
      cout << "Hunger Level: " << pet->getHunger() << endl << endl;
      cout << "Tiredness level: " << pet->getSleep() << endl << endl;
      cout << "Happiness level: " << pet->getHappiness() << endl << endl;
      Art art;
      art.drawEnd();
      cout << endl << "Enter any key to return to main menu!" << endl << endl;
      string key;
      cin >>  key;
      return false;
    }
    
  }
  
return true;
}

void Manage::nextHour(Pets* pet){
  pet->setHappiness(pet->getHappiness() - 25);
  pet->setSleep(pet->getSleep() + 25);
  pet->setHunger(pet->getHunger() + 25);
}

Pets* Manage::allPets(){
  
  vector<Pets*> pets;
  vector <string> temp;
  
  ifstream fin;
  fin.open("GAMEFILE.TXT");
  if(!fin.is_open()) {
    cout << "File not found!" << endl;
  }

  string store;

  while(getline(fin, store)) {

    string variables;
    istringstream ins(store);

    while(ins >> variables) {
      temp.push_back(variables);
    }
    ins.clear();

    Pets* pet = new Pets();

    pet->setType(temp[0]);
    pet->setName(temp[1]);
    pet->setHunger(stoi(temp[2]));
    pet->setSleep(stoi(temp[3]));
    pet->setHappiness(stoi(temp[4]));

    pets.push_back(pet);
    temp.clear();
    
  }
  vector<Pets*> whichPet;
  for(int i = 0; i < pets.size(); i++){
    whichPet.push_back(pets[i]);
  }

  for (int j = 0; j < pets.size(); j++) {
    cout << "Enter " << to_string(j+1) << " to select-" << endl << "Pet type: " << whichPet[j]->getType() << endl << "Pet name: " << whichPet[j]->getName() << endl << endl;
  }

  cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

  if(pets.size() == 0){
    cout << endl << "No pets availabe, please create a new pet!" << endl << endl;
    exit(1);
  }
  int o;
  cin >> o;

  Pets* choice = whichPet[o-1];

  fin.close();

  return choice;
  
}

void Manage::save(Pets* animal){

  vector<Pets*> pets;
  vector<string> temp;

  ifstream fin;
  fin.open("GAMEFILE.TXT");
  
  if(!fin.is_open()){
    cout << "File does not exist!" << endl;
  }

  string data;
  while(getline(fin, data)){
    istringstream ins(data);
    string variables;

    while(ins >> variables){
      temp.push_back(variables);
    }
    ins.clear();
    
    if(temp[1] != animal->getName()){
      Pets* pet = new Pets();
      pet->setType(temp[0]);
      pet->setName(temp[1]);
      pet->setHunger(stoi(temp[2]));
      pet->setSleep(stoi(temp[3]));
      pet->setHappiness(stoi(temp[5]));
      pets.push_back(pet);
      temp.clear();
    }
  }

ofstream fout;
fout.open("GAMEFILE.TXT");
if(!fout.is_open()){
  cout << "File not found!" << endl;
}
  

string yourPet = animal->getType() + " " + animal->getName() + " " + to_string(animal->getHunger()) + " " + to_string(animal->getSleep()) + " " + to_string(animal->getHappiness());

fout << yourPet << endl;

  for(int i = 0; i < pets.size(); i++){
    string yourPet = pets[i]->getType() + " " + pets[i]->getName() + " " + to_string(pets[i]->getHunger()) + " " + to_string(pets[i]->getSleep()) + " " + to_string(pets[i]->getHappiness());
    fout << yourPet << endl;
  }
  
}

