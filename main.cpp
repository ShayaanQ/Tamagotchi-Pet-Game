#include <iostream>
#include <fstream>
#include "Art.h"
#include "Manage.h"
#include <string>
#include <cctype>
using namespace std;

int main() {

  Manage func;
  
  bool game = true;
  
  while(game){
    func.menu();
  }

  return 0;
  
}