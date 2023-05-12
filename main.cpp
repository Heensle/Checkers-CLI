#include <iostream>
#include <string>
#include <vector>
#include "CheckerMech"
#include "GeneralFunctions"
using namespace std;
using namespace CheckerMech;
using namespace GeneralFunctions;

int main(){

  vector <Checker> checkerBoard;

  checkerBoard.push_back(Checker("WHITE", 2, 8));
  checkerBoard.push_back(Checker("WHITE", 4, 8));
  checkerBoard.push_back(Checker("WHITE", 6, 8));
  checkerBoard.push_back(Checker("WHITE", 8, 8));
  checkerBoard.push_back(Checker("WHITE", 1, 7));
  checkerBoard.push_back(Checker("WHITE", 3, 7));
  checkerBoard.push_back(Checker("WHITE", 5, 7));
  checkerBoard.push_back(Checker("WHITE", 7, 7));
  checkerBoard.push_back(Checker("WHITE", 2, 6));
  checkerBoard.push_back(Checker("WHITE", 4, 6));
  checkerBoard.push_back(Checker("WHITE", 6, 6));
  checkerBoard.push_back(Checker("WHITE", 8, 6));
  checkerBoard.push_back(Checker("BLACK", 1, 3));
  checkerBoard.push_back(Checker("BLACK", 3, 3));
  checkerBoard.push_back(Checker("BLACK", 5, 3));
  checkerBoard.push_back(Checker("BLACK", 7, 3));
  checkerBoard.push_back(Checker("BLACK", 2, 2));
  checkerBoard.push_back(Checker("BLACK", 4, 2));
  checkerBoard.push_back(Checker("BLACK", 6, 2));
  checkerBoard.push_back(Checker("BLACK", 8, 2));
  checkerBoard.push_back(Checker("BLACK", 1, 1));
  checkerBoard.push_back(Checker("BLACK", 3, 1));
  checkerBoard.push_back(Checker("BLACK", 5, 1));
  checkerBoard.push_back(Checker("BLACK", 7, 1));




  while (true){

    if (victory(checkerBoard)){
        break;
    }

    string start;
    string destination;

    while (true){
      
      cout << "\033[H\033[2J\033[3J";
      cout << "Enter '? ?' for rules." << endl << endl;

      sort_board(checkerBoard);
      print_board(checkerBoard);

      

      cin >> start >> destination;

      if(start == "?"){
        rules();
      } else {
        break;
      }
      
    }

    move(start, destination, checkerBoard);

  }

  
  cout << "\033[H\033[2J\033[3J";
  sort_board(checkerBoard);
  print_board(checkerBoard);

  cout << "VICTORY!";

  return 0;
}

