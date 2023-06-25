#ifndef MANAGE_H
#define MANAGE_H
#include "Pets.h"
using namespace std;
#include <iostream>

class Manage{
public:
bool menu();
bool load();
bool play(Pets*);
bool create();
void nextHour(Pets*);
void add(Pets*);
bool check(Pets*);
void save(Pets*);
Pets* allPets();
Pets* pet;
};
#endif