/*
Source: Book Challenge
Title: Console CheckerBoard
Author: Cavan Ray Theiss
Description: Print a checkerboard (8X8 grid). 
Each square should be five by three characters wide. 
A 2X2 example follows
    +-----+-----+
    |     |     |
    |     |     |
    |     |     |
    +-----+-----+
    |     |     |
    |     |     |
    |     |     |
    +-----+-----+


*/

#include<iostream>

using namespace std;

void horizontal(const int& edges){
  cout << "+";
  for(int i = 0; i < edges; i++){
    cout << "-----+";
  }
  cout << endl;
}

void vertical(const int& spaces){
  cout << "|";
  for(int i = 0; i < spaces; i++){
    cout << "     |";
  }
  cout << endl;
}

int main(){
char cont = 'Y';
int boardSize = 8;
  do{
    cout << "What size board? :";
    cin >> boardSize;
    cout << endl << endl;
    horizontal(boardSize);
    for(int s = 0; s < boardSize; s++){
      for(int t = 0; t < 3; t++){
        vertical(boardSize);
      }
      horizontal(boardSize);
    }
    cout << endl << endl;
    cout << "Would you like another board? (Y/N)";
    cin >> cont;
  }while(cont == 'Y');

  return 0;
}
