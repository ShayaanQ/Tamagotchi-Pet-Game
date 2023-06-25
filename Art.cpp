#include "Art.h"
#include <iostream>
using namespace std;

void Art::drawMenu(){
  cout << endl << endl;
  cout << "Welcome to Play Land, your pets await you!" << endl;
  cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl <<  endl;
  cout << "Dog:" <<  endl;
  cout << "     __" << endl;
  cout << "(___() '`;" << endl;
  cout << "/,    /`" << endl;
  cout << "\\.\"--\\" << endl << endl;
  cout << "Cat:" << endl << endl;
  cout << "|\\---/|" << endl;
  cout << "| o_o |" << endl;
  cout << " \\_^_/" << endl << endl;
  cout << "Bunny:" << endl;
  cout << " __    __" << endl;
  cout << "/ \\\\..// \\" << endl;
  cout << "  ( oo )  " << endl;
  cout << "   \\__/" << endl << endl;
  cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
  
  cout << endl <<  "Enter 1 to create new pet!" << endl << endl;
  cout << "Enter 2 to load a saved pet!" << endl << endl;
  cout << "Enter 3 to quit!" << endl << endl;
  cout << "Enter 4 to read the tutorial menu!" << endl << endl;

  
}
void Art::drawDog(){
 cout << "     __" << endl;
  cout << "(___() '`;" << endl;
  cout << "/,    /`" << endl;
  cout << "\\.\"--\\" << endl << endl;

}
void Art::drawCat(){
  cout << "|\\---/|" << endl;
  cout << "| o_o |" << endl;
  cout << " \\_^_/" << endl << endl;
}
void Art::drawBunny(){
  cout << " __    __" << endl;
  cout << "/ \\\\..// \\" << endl;
  cout << "  ( oo )  " << endl;
  cout << "   \\__/" << endl << endl;
}
void Art::drawEnd(){
  cout << "★─▄█▀▀║░▄█▀▄║▄█▀▄║██▀▄║─★" << endl;
  cout << "★─██║▀█║██║█║██║█║██║█║─★" << endl;
  cout << "★─▀███▀║▀██▀║▀██▀║███▀║─★" << endl;
  cout << "★───────────────────────★" << endl;
  cout << "★───▐█▀▄─ ▀▄─▄▀ █▀▀──█───★" << endl;
  cout << "★───▐█▀▀▄ ──█── █▀▀──▀───★" << endl;
  cout << "★───▐█▄▄▀ ──▀── ▀▀▀──▄───★" << endl;

}
void Art::drawTutorial(){
  cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
 cout << endl << endl;                                                                     cout << ",--------.          ,--.                ,--.        ,--." <<  endl;
cout << "'--.  .--',--.,--.,-'  '-. ,---. ,--.--.`--' ,--,--.|  |" << endl;  
cout << "   |  |   |  ||  |'-.  .-'| .-. ||  .--',--.' ,-.  ||  |" << endl;
cout << "   |  |   '  ''  '  |  |  ' '-' '|  |   |  |\ '-'  ||   |" << endl;
cout << "   `--'    `----'   `--'   `---' `--'   `--' `--`--'`--'" <<  endl;
cout << ",--.   ,--." << endl;                                               
cout << "|   `.'   | ,---. ,--,--, ,--.,--.,-----.,-----.,-----." << endl;    
cout << "|  |'.'|  || .-. :|      \|  ||  |'-----''-----''-----' " << endl;   
cout << "|  |   |  |\   --.|  ||  |'  ''  '" << endl;                        
cout << "`--'   `--' `----'`--''--' `----'" <<  endl;                  

                                                                              
  cout << endl << endl << "Play land is an RPG where you are given the option to choose between 3 pets, a dog, a cat, and a bunny." << endl << endl;
  cout << "The objective of the game is to take care of your pet, name it, feed it, play with it... etc." << endl << endl;
  cout << "Each pet has unique attributes of hunger, tiredness, and happiness based on their nature." << endl << endl;
  cout << "These stats increase or decrease however when you choose to progress to the next in game hour." << endl << endl;
  cout << "You can take actions like feeding the pet to decrease its hunger level or playing with the pet to increase its happiness." << endl << endl;
  cout << "So choose your life long companion and take good care of him or her!" << endl << endl;
  cout << "Enter any key to return to menu!" << endl << endl;
  string key;
  cin >> key;
  
}
void Art::drawEat(){
 cout << " ,--./,-." << endl;
 cout <<  "/ #      \"" << endl;
cout << "|       |" << endl;
 cout << "\         / " << endl;   
 cout << " `._,._,'" << endl;
}
void Art::drawSleep(){
  cout << "   /'''''/|" << endl;
 cout << "  /     /#|---(ZZZZZZzzzzZZZZZzzzzzzzzz)" << endl;
cout << " /_____/##|_____ " << endl;  
cout << " |     |##/    /" << endl;
cout << " |     |#/    /" << endl;
cout << " |_____|/____/" << endl;
  
}
void Art::drawPlay(){
 cout << "    _.-'___'-._" << endl;
  cout << "  .'--.`   `.--'." << endl;
   cout << " /.'   \\   /   `.\\" << endl;
  cout << "| /'-._/```\_.-'\\ |" << endl;
  cout << "|/    |     |   \\|" << endl;
  cout << "| \\ .''-._.-''. /|" << endl;
   cout << " \\|     |     | /" << endl;
   cout << " '.'._.-'-._.'.'" << endl;
  cout << "   '-:_____;-'" << endl;
}
void Art::drawRun(){
cout << "                        ,////," << endl;
cout << "                        /// 6|" << endl;
cout << "                        //  _|" << endl;
cout << "                       _/_,-'" << endl;
cout << "                  _.-/'/   \   ,/;," << endl;
cout << "               ,-' /'  \_   \ / _/" << endl;
cout << "               `\ /     _/\  ` /" << endl;
cout << "                 |     /,  `\_/" << endl;
cout << "                 |     \'" << endl;
cout << "    /\_        /`      /\"" << endl;
cout << "   /' /_``--.__/\  `,. /  \"" << endl;
cout << "  |_/`  `-._     `\/  `\   `." << endl;
cout << "            `-.__/'     `\   |" << endl;
cout << "                          `\  \"" << endl;
cout << "                            `\ \"" << endl;
cout << "                              \_\__" << endl;
cout << "                               \___)" << endl;

}