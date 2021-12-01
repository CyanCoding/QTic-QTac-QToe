#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

bool stillTurn;
bool win;
string dif;
int fm1;
int fm2;
string diff;
string r1 = "1";
string r2 = "2";
string r3 = "3";
string r4 = "4";
string r5 = "5";
string r6 = "6";
string r7 = "7";
string r8 = "8";
string r9 = "9";
bool r1c = false;
bool r2c = false;
bool r3c = false;
bool r4c = false;
bool r5c = false;
bool r6c = false;
bool r7c = false;
bool r8c = false;
bool r9c = false;
class drawBoard {
  public:
  void normalBoard() {
    cout << "      Tic-Tac-Toe\n\n";
    cout << "       |       |       \n";
    cout << "   " << r1 << "   |   " << r2 << "   |   " << r3 << "   \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "   " << r4 << "   |   " << r5 << "   |   " << r6 << "   \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "   " << r7 << "   |   " << r8 << "   |   " << r9 << "   \n";
    cout << "       |       |       \n\n\n";
  }
};
int main() {
  srand(time(0));
  cout << "Welcome to Tic-Tac-Toe!\n\n";
  cout << "2600+ lines of code C++ Tic-Tac-Toe program created by CyanCoding.\n\n";
  cout << "You play as 'X' and the computer plays as 'O'.\n\n";
  cout << "Type in 'Play' to start a game against the computer or 'PvP' to start a game with two players ->";
  cin >> dif;
  if (dif == "board" || dif == "Board" || dif == "BOARD") {
      for (int sb = 0; sb < 80; sb++) {
        cout << endl;
      }
      drawBoard normal1;
      normal1.normalBoard();
  }
  else if (dif == "play" || dif == "Play" || dif == "PLAY") {
    cout << endl << endl << "Type in a difficulty level (Easy, Normal, Impossible) ->";
    cin >> diff;
    if (diff == "impossible" || diff == "Impossible" || diff == "IMPOSSIBLE") {
      cout << endl << endl << "Deciding who will go first...";
      int rp = (rand() % 2);
      if (rp == 0) {
        // if the player is selected to go first
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        cout << endl << endl << "You have been selected to play first! Good luck!\n\n\n";
        drawBoard normal1;
        normal1.normalBoard();
        stillTurn = true;
        while (stillTurn == true) {
          cout << "\nType in a number that is on the board to place an X there ->";
          cin >> fm1;
          // Player 1st move
          if (fm1 == 1 && r1c == false) {
            r1 = "X";
            r1c = true;
            stillTurn = false;
          }
          else if (fm1 == 2 && r2c == false) {
            r2 = "X";
            r2c = true;
            stillTurn = false;
          }
          else if (fm1 == 3 && r3c == false) {
            r3 = "X";
            r3c = true;
            stillTurn = false;
          }
          else if (fm1 == 4 && r4c == false) {
            r4 = "X";
            r4c = true;
            stillTurn = false;
          }
          else if (fm1 == 5 && r5c == false) {
            r5 = "X";
            r5c = true;
            stillTurn = false;
          }
          else if (fm1 == 6 && r6c == false) {
            r6 = "X";
            r6c = true;
            stillTurn = false;
          }
          else if (fm1 == 7 && r7c == false) {
            r7 = "X";
            r7c = true;
            stillTurn = false;
          }
          else if (fm1 == 8 && r8c == false) {
            r8 = "X";
            r8c = true;
            stillTurn = false;
          }
          else if (fm1 == 9 && r9c == false) {
            r9 = "X";
            r9c = true;
            stillTurn = false;
          }
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal2;
        normal2.normalBoard();
        sleep(3);
        // Computer first move
        if (r5c == false) {
          r5 = "O";
          r5c = true;
        }
        else if (r5c == true) {
          int rp = (rand() % 4);
          if (rp == 1) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 2) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 3) {
            r9 = "O";
            r9c = true;
          }
          else {
            r7 = "O";
            r7c = true;
          }
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal3;
        normal3.normalBoard();
        stillTurn = true;
        while (stillTurn == true) {
          cout << "\nType in a number that is on the board to place an X there ->";
          cin >> fm2;
          // Player 2nd move
          if (fm2 == 1 && r1c == false) {
            r1 = "X";
            r1c = true;
            stillTurn = false;
          }
          else if (fm2 == 2 && r2c == false) {
            r2 = "X";
            r2c = true;
            stillTurn = false;
          }
          else if (fm2 == 3 && r3c == false) {
            r3 = "X";
            r3c = true;
            stillTurn = false;
          }
          else if (fm2 == 4 && r4c == false) {
            r4 = "X";
            r4c = true;
            stillTurn = false;
          }
          else if (fm2 == 5 && r5c == false) {
            r5 = "X";
            r5c = true;
            stillTurn = false;
          }
          else if (fm2 == 6 && r6c == false) {
            r6 = "X";
            r6c = true;
            stillTurn = false;
          }
          else if (fm2 == 7 && r7c == false) {
            r7 = "X";
            r7c = true;
            stillTurn = false;
          }
          else if (fm2 == 8 && r8c == false) {
            r8 = "X";
            r8c = true;
            stillTurn = false;
          }
          else if (fm2 == 9 && r9c == false) {
            r9 = "X";
            r9c = true;
            stillTurn = false;
          }
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal4;
        normal4.normalBoard();
        sleep(3);
        // Computer 2nd move
        // Check to make sure the other player can't win next turn
        if (r1 == "X" && r2 == "X" && r3c == false || r9 == "X" && r6 == "X" && r3c == false || r7 == "X" && r5 == "X" && r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r1 == "X" && r3 == "X" && r2c == false || r8 == "X" && r5 == "X" && r2c == false) {
          r2 = "O";
          r2c = true;
        }
        else if (r1 == "X" && r9 == "X" && r5c == false || r3 == "X" && r7 == "X" && r5c == false || r2 == "X" && r8 == "X" && r5c == false || r4 == "X" && r6 == "X" && r5c == false) {
          r5 = "O";
          r5c = true;
        }
        else if (r3 == "X" && r2 == "X" && r1c == false || r7 == "X" && r4 == "X" && r1c == true || r9 == "X" && r5 == "X" && r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r1 == "X" && r4 == "X" && r7c == false || r3 == "X" && r5 == "X" && r7c == false || r9 == "X" && r8 == "X" && r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r1 == "X" && r7 == "X" && r4c == false || r5 == "X" && r6 == "X" && r4c == false) {
          r4 = "O";
          r4c = true;
        }
        else if (r2 == "X" && r5 == "X" && r8c == false || r7 == "X" && r9 == "X" && r8c == false) {
          r8 = "O";
          r8c = true;
        }
        else if (r3 == "X" && r6 == "X" && r9c == false || r7 == "X" && r8 == "X" && r9c == true || r1 == "X" && r5 == "X" && r9c == false)  {
          r9 = "O";
          r9c = true;
        }
        else if (r4 == "X" && r5 == "X" && r6c == false || r3 == "X" && r9 == "X" && r6c == false) {
          r6 = "O";
          r6c = true;
        }
        else if (r2 == "X" && r6 == "X" && r3c == false || r1 == "X" && r9 == "X" && r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r2 == "X" && r4 == "X" && r1c == false || r3 == "X" && r7 == "X" && r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r4 == "X" && r8 == "X" && r7c == false || r9 == "X" && r1 == "X" && r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r6 == "X" && r8 == "X" && r9c == false || r3 == "X" && r7 == "X" && r9c == false) {
          r9 = "O";
          r9c = true;
        }
        // block if they move in a diagonal line
        else if (r1 == "X" && r5 == "O" && r9 == "X" || r9 == "X" && r5 == "O" && r1 == "X" || r7 == "X" && r5 == "O" && r3 == "X" || r3 == "X" && r5 == "O" && r7 == "X") {
          int rp = (rand() % 4);
          if (rp == 1) {
            r4 = "O";
            r4c = true;
          }
          else if (rp == 2) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 3) {
            r2 = "O";
            r2c = true;
          }
          else {
            r8 = "O";
            r8c = true;
          }
        }
        else if (r1 == "X" && r6 == "X" || r3 == "X" && r4 == "X") {
          r2 = "O";
          r2c = true;
        }
        else if (r9 == "X" && r2 == "X" || r3 == "X" && r8 == "X") {
          r6 = "O";
          r6c = true;
        }
        else if (r9 == "X" && r4 == "X" || r6 == "X" && r7 == "X") {
          r8 = "O";
          r8c = true;
        }
        else if (r8 == "X" && r1 == "X" || r2 == "X" && r7 == "X") {
          r4 = "O";
          r4c = true;
        }
        else if (r7 == "X" && r5 == "X" && r3 == "O" || r7 == "O" && r5 == "X" && r3 == "X") {
          int rp = (rand() % 2);
          if (rp == 1) {
            r1 = "O";
            r1c = true;
          }
          else {
            r9 = "O";
            r9c = true;
          }
        }
        else if (r9 == "X" && r5 == "X" && r1 == "O" || r9 == "O" && r5 == "X" && r1 == "X") {
          int rp = (rand() % 2);
          if (rp == 1) {
            r3 = "O";
            r3c = true;
          }
          else {
            r7 = "O";
            r7c = true;
          }
        }
        // just in case the computer doesn't have a plan
        else if (r8c == false) {
          r8 = "O";
          r8c = true;
        }
        else if (r6c == false) {
          r6 = "O";
          r6c = true;
        }
        else if (r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r2c == false) {
          r2 = "O";
          r2c = true;
        }
        else if (r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r9c == false) {
          r9 = "O";
          r9c = true;
        }
        else if (r4c == false) {
          r4 = "O";
          r4c = true;
        }
        else if (r5c == false) {
          r5 = "O";
          r5c = true;
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal5;
        normal5.normalBoard();
        stillTurn = true;
        while (stillTurn == true) {
          cout << "\nType in a number that is on the board to place an X there ->";
          cin >> fm2;
          // Player 3rd move
          if (fm2 == 1 && r1c == false) {
            r1 = "X";
            r1c = true;
            stillTurn = false;
          }
          else if (fm2 == 2 && r2c == false) {
            r2 = "X";
            r2c = true;
            stillTurn = false;
          }
          else if (fm2 == 3 && r3c == false) {
            r3 = "X";
            r3c = true;
            stillTurn = false;
          }
          else if (fm2 == 4 && r4c == false) {
            r4 = "X";
            r4c = true;
            stillTurn = false;
          }
          else if (fm2 == 5 && r5c == false) {
            r5 = "X";
            r5c = true;
            stillTurn = false;
          }
          else if (fm2 == 6 && r6c == false) {
            r6 = "X";
            r6c = true;
            stillTurn = false;
          }
          else if (fm2 == 7 && r7c == false) {
            r7 = "X";
            r7c = true;
            stillTurn = false;
          }
          else if (fm2 == 8 && r8c == false) {
            r8 = "X";
            r8c = true;
            stillTurn = false;
          }
          else if (fm2 == 9 && r9c == false) {
            r9 = "X";
            r9c = true;
            stillTurn = false;
          }
        }
        while (win == false) {
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal6;
        normal6.normalBoard();
        sleep(3);
        // Check if the player won
        if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
          cout << endl << endl << "Congratulations! You are one of the few to have beat Impossible mode!";
          win = true;
          break;
        }
        // check if the computer won
        else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
          cout << endl << endl << "Sorry, you lost to the computer.";
          win = true;
          break;
        }
        // check if the game ended in a tie
        else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
          cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
          win = true;
          break;
        }
        // computer 3rd move
        // check if it can win
        if (r1 == "O" && r2 == "O" && r3c == false || r7 == "O" && r5 == "O" && r3c == false || r9 == "O" && r6 == "O" && r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r1 == "O" && r3 == "O" && r2c == false || r8 == "O" && r5 == "O" && r2c == false) {
          r2 = "O";
          r2c = true;
        }
        else if (r9 == "O" && r5 == "O" && r1c == false || r2 == "O" && r3 == "O" && r1c == false || r7 == "O" && r4 == "O" && r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r1 == "O" && r7 == "O" && r4c == false || r6 == "O" && r5 == "O" && r4c == false) {
          r4 = "O";
          r4c = true;
        }
        else if (r3 == "O" && r7 == "O" && r5c == false || r9 == "O" && r1 == "O" && r5c == false || r4 == "O" && r6 == "O" && r5c == false || r8 == "O" && r2 == "O" && r5c == false) {
          r5 = "O";
          r5c = true;
        }
        else if (r4 == "O" && r5 == "O" && r6c == false || r3 == "O" && r9 == "O" && r6c == false) {
          r6 = "O";
          r6c = true;
        }
        else if (r1 == "O" && r4 == "O" && r7c == false || r9 == "O" && r8 == "O" && r7c == false || r3 == "O" && r5 == "O" && r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r2 == "O" && r5 == "O" && r8c == false || r7 == "O" && r9 == "O" && r8c == false) {
          r8 = "O";
          r8c = true;
        }
        else if (r3 == "O" && r6 == "O" && r9c == false || r1 == "O" && r5 == "O" && r9c == false || r7 == "O" && r8 == "O" && r9c == false) {
          r9 = "O";
          r9c = true;
        }
        // check if the player can win next turn
        else if (r1 == "X" && r2 == "X" && r3c == false || r9 == "X" && r6 == "X" && r3c == false || r7 == "X" && r5 == "X" && r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r1 == "X" && r3 == "X" && r2c == false || r8 == "X" && r5 == "X" && r2c == false) {
          r2 = "O";
          r2c = true;
        }
        else if (r3 == "X" && r2 == "X" && r1c == false || r7 == "X" && r4 == "X" && r1c == false || r9 == "X" && r5 == "X" && r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r1 == "X" && r4 == "X" && r7c == false || r3 == "X" && r5 == "X" && r7c == false || r9 == "X" && r8 == "X" && r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r1 == "X" && r9 == "X" && r5c == false || r3 == "X" && r7 == "X" && r5c == false || r2 == "X" && r8 == "X" && r5c == false || r4 == "X" && r6 == "X" && r5c == false) {
          r5 = "O";
          r5c = true;
        }
        else if (r1 == "X" && r7 == "X" && r4c == false || r5 == "X" && r6 == "X" && r4c == false) {
          r4 = "O";
          r4c = true;
        }
        else if (r2 == "X" && r5 == "X" && r8c == false || r7 == "X" && r9 == "X" && r8c == false) {
          r8 = "O";
          r8c = true;
        }
        else if (r3 == "X" && r6 == "X" && r9c == false || r7 == "X" && r8 == "X" && r9c == false || r1 == "X" && r5 == "X" && r9c == false)  {
          r9 = "O";
          r9c = true;
        }
        else if (r4 == "X" && r5 == "X" && r6c == false || r3 == "X" && r9 == "X" && r6c == false) {
          r6 = "O";
          r6c = true;
        }
        else if (r1 == "X" && r5 == "O" && r9 == "X" || r9 == "X" && r5 == "O" && r1 == "X" || r7 == "X" && r5 == "O" && r3 == "X" || r3 == "X" && r5 == "O" && r7 == "X") {
          int rp = (rand() % 4);
          if (rp == 1) {
            r4 = "O";
            r4c = true;
          }
          else if (rp == 2) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 3) {
            r2 = "O";
            r2c = true;
          }
          else {
            r8 = "O";
            r8c = true;
          }
        }
        // just incase the computer doesn't have a plan
        else if (r8c == false) {
          r8 = "O";
          r8c = true;
        }
        else if (r6c == false) {
          r6 = "O";
          r6c = true;
        }
        else if (r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r2c == false) {
          r2 = "O";
          r2c = true;
        }
        else if (r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r9c == false) {
          r9 = "O";
          r9c = true;
        }
        else if (r4c == false) {
          r4 = "O";
          r4c = true;
        }
        else if (r5c == false) {
          r5 = "O";
          r5c = true;
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal7;
        normal7.normalBoard();
        // check if the player won
        if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
          cout << endl << endl << "Congratulations! You won!";
          win = true;
          break;
        }
        // check if the computer won
        else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
          cout << endl << endl << "Sorry, you lost to the computer.";
          win = true;
          break;
        }
        // check if there was a tie
        else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
          cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
          win = true;
          break;
        }
        stillTurn = true;
        while (stillTurn == true) {
          cout << "\nType in a number that is on the board to place an X there ->";
          cin >> fm2;
          // Player move
          if (fm2 == 1 && r1c == false) {
            r1 = "X";
            r1c = true;
            stillTurn = false;
          }
          else if (fm2 == 2 && r2c == false) {
            r2 = "X";
            r2c = true;
            stillTurn = false;
          }
          else if (fm2 == 3 && r3c == false) {
            r3 = "X";
            r3c = true;
            stillTurn = false;
          }
          else if (fm2 == 4 && r4c == false) {
            r4 = "X";
            r4c = true;
            stillTurn = false;
          }
          else if (fm2 == 5 && r5c == false) {
            r5 = "X";
            r5c = true;
            stillTurn = false;
          }
          else if (fm2 == 6 && r6c == false) {
            r6 = "X";
            r6c = true;
            stillTurn = false;
          }
          else if (fm2 == 7 && r7c == false) {
            r7 = "X";
            r7c = true;
            stillTurn = false;
          }
          else if (fm2 == 8 && r8c == false) {
            r8 = "X";
            r8c = true;
            stillTurn = false;
          }
          else if (fm2 == 9 && r9c == false) {
            r9 = "X";
            r9c = true;
            stillTurn = false;
          }
        }
        }
      }
      else {
        // if the computer is selected to go first
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        cout << endl << endl << "The computer has been selected to play first. Good luck!\n\n\n";
        drawBoard normal1;
        normal1.normalBoard();
        cout << endl << "The computer is strategizing...\n";
        sleep(8);
        // computer first move
        int rp = (rand() % 3);
        if (rp == 0 || rp == 1) {
          r5 = "O";
          r5c = true;
        }
        else {
          int rp = (rand() % 4);
          if (rp == 1) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 2) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 3) {
            r9 = "O";
            r9c = true;
          }
          else {
            r7 = "O";
            r7c = true;
          }
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal2;
        normal2.normalBoard();
        stillTurn = true;
        while (stillTurn == true) {
          cout << "\nType in a number that is on the board to place an X there ->";
          cin >> fm2;
          // Player 1st move
          if (fm2 == 1 && r1c == false) {
            r1 = "X";
            r1c = true;
            stillTurn = false;
          }
          else if (fm2 == 2 && r2c == false) {
            r2 = "X";
            r2c = true;
            stillTurn = false;
          }
          else if (fm2 == 3 && r3c == false) {
            r3 = "X";
            r3c = true;
            stillTurn = false;
          }
          else if (fm2 == 4 && r4c == false) {
            r4 = "X";
            r4c = true;
            stillTurn = false;
          }
          else if (fm2 == 5 && r5c == false) {
            r5 = "X";
            r5c = true;
            stillTurn = false;
          }
          else if (fm2 == 6 && r6c == false) {
            r6 = "X";
            r6c = true;
            stillTurn = false;
          }
          else if (fm2 == 7 && r7c == false) {
            r7 = "X";
            r7c = true;
            stillTurn = false;
          }
          else if (fm2 == 8 && r8c == false) {
            r8 = "X";
            r8c = true;
            stillTurn = false;
          }
          else if (fm2 == 9 && r9c == false) {
            r9 = "X";
            r9c = true;
            stillTurn = false;
          }
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal3;
        normal3.normalBoard();
        sleep(3);
        // computer 2nd move
        // if the computer played in the middle
        if (r5 == "O") {
          // check if they marked an edge
          if (r2 == "X") {
            int rp = (rand() % 2);
            if (rp == 1) {
              r9 = "O";
              r9c = true;
            }
            else if (rp == 0) {
              r7 = "O";
              r7c = true;
            }
          }
          else if (r4 == "X") {
            int rp = (rand() % 2);
            if (rp == 1) {
              r9 = "O";
              r9c = true;
            }
            else if (rp == 0) {
              r3 = "O";
              r3c = true;
            }
          }
          else if (r8 == "X") {
            int rp = (rand() % 2);
            if (rp == 1) {
              r3 = "O";
              r3c = true;
            }
            else if (rp == 0) {
              r1 = "O";
              r1c = true;
            }
          }
          else if (r6 == "X") {
            int rp = (rand() % 2);
            if (rp == 1) {
              r1 = "O";
              r1c = true;
            }
            else if (rp == 0) {
              r7 = "O";
              r7c = true;
            }
          }
          // check if they mark a corner
          else if (r1 == "X") {
            r9 = "O";
            r9c = true;
          }
          else if (r3 == "X") {
            r7 = "O";
            r7c = true;
          }
          else if (r7 == "X") {
            r3 = "O";
            r3c = true;
          }
          else if (r9 == "X") {
            r1 = "O";
            r1c = true;
          }
        }
        else if (r1 == "O" && r5 == "X") {
          r9 = "O";
          r9c = true;
        }
        else if (r9 == "O" && r5 == "X") {
          r1 = "O";
          r1c = true;
        }
        else if (r7 == "O" && r5 == "X") {
          r3 = "O";
          r3c = true;
        }
        else if (r3 == "O" && r5 == "X") {
          r7 = "O";
          r7c = true;
        }
        // just incase the computer doesn't have a plan
        else if (r8c == false) {
          r8 = "O";
          r8c = true;
        }
        else if (r6c == false) {
          r6 = "O";
          r6c = true;
        }
        else if (r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r2c == false) {
          r2 = "O";
          r2c = true;
        }
        else if (r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r9c == false) {
          r9 = "O";
          r9c = true;
        }
        else if (r4c == false) {
          r4 = "O";
          r4c = true;
        }
        else if (r5c == false) {
          r5 = "O";
          r5c = true;
        }
        while (win == false) {
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal4;
          normal4.normalBoard();
          stillTurn = true;
          while (stillTurn == true) {
            cout << "\nType in a number that is on the board to place an X there ->";
            cin >> fm2;
            // Player 2nd move
            if (fm2 == 1 && r1c == false) {
              r1 = "X";
              r1c = true;
              stillTurn = false;
            }
            else if (fm2 == 2 && r2c == false) {
              r2 = "X";
              r2c = true;
              stillTurn = false;
            }
            else if (fm2 == 3 && r3c == false) {
              r3 = "X";
              r3c = true;
              stillTurn = false;
            }
            else if (fm2 == 4 && r4c == false) {
              r4 = "X";
              r4c = true;
              stillTurn = false;
            }
            else if (fm2 == 5 && r5c == false) {
              r5 = "X";
              r5c = true;
              stillTurn = false;
            }
            else if (fm2 == 6 && r6c == false) {
              r6 = "X";
              r6c = true;
              stillTurn = false;
            }
            else if (fm2 == 7 && r7c == false) {
              r7 = "X";
              r7c = true;
              stillTurn = false;
            }
            else if (fm2 == 8 && r8c == false) {
              r8 = "X";
              r8c = true;
              stillTurn = false;
            }
            else if (fm2 == 9 && r9c == false) {
              r9 = "X";
              r9c = true;
              stillTurn = false;
            }
          }
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal5;
          normal5.normalBoard();
          sleep(3);
        // computer 3rd move
        // check if the computer can win
        if (r1 == "O" && r2 == "O" && r3c == false || r7 == "O" && r5 == "O" && r3c == false || r9 == "O" && r6 == "O" && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r1 == "O" && r3 == "O" && r2c == false || r8 == "O" && r5 == "O" && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r9 == "O" && r5 == "O" && r1c == false || r2 == "O" && r3 == "O" && r1c == false || r7 == "O" && r4 == "O" && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r1 == "O" && r7 == "O" && r4c == false || r6 == "O" && r5 == "O" && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r3 == "O" && r7 == "O" && r5c == false || r9 == "O" && r1 == "O" && r5c == false || r4 == "O" && r6 == "O" && r5c == false || r8 == "O" && r2 == "O" && r5c == false) {
            r5 = "O";
            r5c = true;
          }
          else if (r4 == "O" && r5 == "O" && r6c == false || r3 == "O" && r9 == "O" && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1 == "O" && r4 == "O" && r7c == false || r9 == "O" && r8 == "O" && r7c == false || r3 == "O" && r5 == "O" && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r2 == "O" && r5 == "O" && r8c == false || r7 == "O" && r9 == "O" && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r3 == "O" && r6 == "O" && r9c == false || r1 == "O" && r5 == "O" && r9c == false || r7 == "O" && r8 == "O" && r9c == false) {
            r9 = "O";
            r9c = true;
          }
          // check if the player can win next turn
          else if (r1 == "X" && r2 == "X" && r3c == false || r9 == "X" && r6 == "X" && r3c == false || r7 == "X" && r5 == "X" && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r1 == "X" && r3 == "X" && r2c == false || r8 == "X" && r5 == "X" && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r1 == "X" && r9 == "X" && r5c == false || r3 == "X" && r7 == "X" && r5c == false || r2 == "X" && r8 == "X" && r5c == false || r4 == "X" && r6 == "X" && r5c == false) {
            r5 = "O";
            r5c = true;
          }
          else if (r3 == "X" && r2 == "X" && r1c == false || r7 == "X" && r4 == "X" && r1c == false || r9 == "X" && r5 == "X" && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r1 == "X" && r4 == "X" && r7c == false || r3 == "X" && r5 == "X" && r7c == false || r9 == "X" && r8 == "X" && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r1 == "X" && r7 == "X" && r4c == false || r5 == "X" && r6 == "X" && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r2 == "X" && r5 == "X" && r8c == false || r7 == "X" && r9 == "X" && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r3 == "X" && r6 == "X" && r9c == false || r7 == "X" && r8 == "X" && r9c == true || r1 == "X" && r5 == "X" && r9c == false)  {
            r9 = "O";
            r9c = true;
          }
          else if (r4 == "X" && r5 == "X" && r6c == false || r3 == "X" && r9 == "X" && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          // just in case the computer doesn't have a plan
          else if (r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r9c == false) {
            r9 = "O";
            r9c = true;
          }
          else if (r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r5c == false) {
            r5 = "O";
            r5c = true;
          }
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal6;
          normal6.normalBoard();
        // check if the player won
        if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
          cout << endl << endl << "Congratulations! You won!";
          win = true;
          break;
        }
        // check if the computer won
        else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
          cout << endl << endl << "Sorry, you lost to the computer.";
          win = true;
          break;
        }
        // check if there was a tie
        else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
          cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
          win = true;
          break;
        }
      }
      }
    }
    // Normal mode
    else if (diff == "normal" || diff == "Normal" || diff == "NORMAL") {
      cout << endl << endl << "Deciding who will go first...";
      int rp = (rand() % 2);
      if (rp == 0) {
        // if the player is selected to go first
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        cout << endl << endl << "You have been selected to play first! Good luck!\n\n\n";
        drawBoard normal1;
        normal1.normalBoard();
        stillTurn = true;
        while (stillTurn == true) {
          cout << "\nType in a number that is on the board to place an X there ->";
          cin >> fm1;
          // Player 1st move
          if (fm1 == 1 && r1c == false) {
            r1 = "X";
            r1c = true;
            stillTurn = false;
          }
          else if (fm1 == 2 && r2c == false) {
            r2 = "X";
            r2c = true;
            stillTurn = false;
          }
          else if (fm1 == 3 && r3c == false) {
            r3 = "X";
            r3c = true;
            stillTurn = false;
          }
          else if (fm1 == 4 && r4c == false) {
            r4 = "X";
            r4c = true;
            stillTurn = false;
          }
          else if (fm1 == 5 && r5c == false) {
            r5 = "X";
            r5c = true;
            stillTurn = false;
          }
          else if (fm1 == 6 && r6c == false) {
            r6 = "X";
            r6c = true;
            stillTurn = false;
          }
          else if (fm1 == 7 && r7c == false) {
            r7 = "X";
            r7c = true;
            stillTurn = false;
          }
          else if (fm1 == 8 && r8c == false) {
            r8 = "X";
            r8c = true;
            stillTurn = false;
          }
          else if (fm1 == 9 && r9c == false) {
            r9 = "X";
            r9c = true;
            stillTurn = false;
          }
        }
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        drawBoard normal2;
        normal2.normalBoard();
        sleep(3);
        // Computer first move
        if (r5c == true) {
          int rp = (rand() % 8);
          if (rp == 0) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 1) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 2) {
            r9 = "O";
            r9c = true;
          }
          else if (rp == 3) {
            r7 = "O";
            r7c = true;
          }
          else if (rp == 4) {
            r2 = "O";
            r2c = true;
          }
          else if (rp == 5) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 6) {
            r8 = "O";
            r8c = true;
          }
          else if (rp == 7) {
            r4 = "O";
            r4c = true;
          }
        }
        else if (r1c == true) {
          int rp = (rand() % 7);
          if (rp == 0) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 1) {
            r9 = "O";
            r9c = true;
          }
          else if (rp == 2) {
            r7 = "O";
            r7c = true;
          }
          else if (rp == 3) {
            r2 = "O";
            r2c = true;
          }
          else if (rp == 4) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 5) {
            r8 = "O";
            r8c = true;
          }
          else {
            r4 = "O";
            r4c = true;
          }
        }
        else if (r7c == true) {
          int rp = (rand() % 7);
          if (rp == 0) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 1) {
            r9 = "O";
            r9c = true;
          }
          else if (rp == 2) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 3) {
            r2 = "O";
            r2c = true;
          }
          else if (rp == 4) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 5) {
            r8 = "O";
            r8c = true;
          }
          else {
            r4 = "O";
            r4c = true;
          }
        }
        else if (r3c == true) {
          int rp = (rand() % 7);
          if (rp == 0) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 1) {
            r9 = "O";
            r9c = true;
          }
          else if (rp == 2) {
            r7 = "O";
            r7c = true;
          }
          else if (rp == 3) {
            r2 = "O";
            r2c = true;
          }
          else if (rp == 4) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 5) {
            r8 = "O";
            r8c = true;
          }
          else {
            r4 = "O";
            r4c = true;
          }
        }
        else if (r9c == true) {
          int rp = (rand() % 7);
          if (rp == 0) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 1) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 2) {
            r7 = "O";
            r7c = true;
          }
          else if (rp == 3) {
            r2 = "O";
            r2c = true;
          }
          else if (rp == 4) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 5) {
            r8 = "O";
            r8c = true;
          }
          else {
            r4 = "O";
            r4c = true;
          }
        }
        else if (r2c == true || r6c == true || r8c == true || r4c == true) {
          int rp = (rand() % 4);
          if (rp == 0) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 1) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 2) {
            r9 = "O";
            r9c = true;
          }
          else if (rp == 3) {
            r7 = "O";
            r7c = true;
          }
        }
        while (win == false) {
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal3;
          normal3.normalBoard();
          // check if the player won
          if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
            cout << endl << endl << "Congratulations! You won!";
            win = true;
            break;
          }
          // check if the computer won
          else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
            cout << endl << endl << "Sorry, you lost to the computer.";
            win = true;
            break;
          }
          // check if there was a tie
          else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
            cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
            win = true;
            break;
          }
          stillTurn = true;
          while (stillTurn == true) {
            cout << "\nType in a number that is on the board to place an X there ->";
            cin >> fm2;
            // Player 2nd move
            if (fm2 == 1 && r1c == false) {
              r1 = "X";
              r1c = true;
              stillTurn = false;
            }
            else if (fm2 == 2 && r2c == false) {
              r2 = "X";
              r2c = true;
              stillTurn = false;
            }
            else if (fm2 == 3 && r3c == false) {
              r3 = "X";
              r3c = true;
              stillTurn = false;
            }
            else if (fm2 == 4 && r4c == false) {
              r4 = "X";
              r4c = true;
              stillTurn = false;
            }
            else if (fm2 == 5 && r5c == false) {
              r5 = "X";
              r5c = true;
              stillTurn = false;
            }
            else if (fm2 == 6 && r6c == false) {
              r6 = "X";
              r6c = true;
              stillTurn = false;
            }
            else if (fm2 == 7 && r7c == false) {
              r7 = "X";
              r7c = true;
              stillTurn = false;
            }
            else if (fm2 == 8 && r8c == false) {
              r8 = "X";
              r8c = true;
              stillTurn = false;
            }
            else if (fm2 == 9 && r9c == false) {
              r9 = "X";
              r9c = true;
              stillTurn = false;
            }
          }
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal4;
          normal4.normalBoard();
          // check if the player won
          sleep(3);
          if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
            cout << endl << endl << "Congratulations! You won!";
            win = true;
            break;
          }
          // check if the computer won
          else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
            cout << endl << endl << "Sorry, you lost to the computer.";
            win = true;
            break;
          }
          // check if there was a tie
          else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
            cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
            win = true;
            break;
          }
          // Computer turn X
          if (r1 == "O" && r2 == "O" && r3c == false || r7 == "O" && r5 == "O" && r3c == false || r9 == "O" && r6 == "O" && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r1 == "O" && r3 == "O" && r2c == false || r8 == "O" && r5 == "O" && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r9 == "O" && r5 == "O" && r1c == false || r2 == "O" && r3 == "O" && r1c == false || r7 == "O" && r4 == "O" && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r1 == "O" && r7 == "O" && r4c == false || r6 == "O" && r5 == "O" && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r3 == "O" && r7 == "O" && r5c == false || r9 == "O" && r1 == "O" && r5c == false || r4 == "O" && r6 == "O" && r5c == false || r8 == "O" && r2 == "O" && r5c == false) {
            r5 = "O";
            r5c = true;
          }
          else if (r4 == "O" && r5 == "O" && r6c == false || r3 == "O" && r9 == "O" && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1 == "O" && r4 == "O" && r7c == false || r9 == "O" && r8 == "O" && r7c == false || r3 == "O" && r5 == "O" && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r2 == "O" && r5 == "O" && r8c == false || r7 == "O" && r9 == "O" && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r3 == "O" && r6 == "O" && r9c == false || r1 == "O" && r5 == "O" && r9c == false || r7 == "O" && r8 == "O" && r9c == false) {
            r9 = "O";
            r9c = true;
          }
          // check if the player can win next turn
          else if (r1 == "X" && r2 == "X" && r3c == false || r9 == "X" && r6 == "X" && r3c == false || r7 == "X" && r5 == "X" && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r1 == "X" && r3 == "X" && r2c == false || r8 == "X" && r5 == "X" && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r3 == "X" && r2 == "X" && r1c == false || r7 == "X" && r4 == "X" && r1c == false || r9 == "X" && r5 == "X" && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r1 == "X" && r9 == "X" && r5c == false || r3 == "X" && r7 == "X" && r5c == false || r2 == "X" && r8 == "X" && r5c == false || r4 == "X" && r6 == "X" && r5c == false) {
            r5 = "O";
            r5c = true;
          }
          else if (r1 == "X" && r4 == "X" && r7c == false || r3 == "X" && r5 == "X" && r7c == false || r9 == "X" && r8 == "X" && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r1 == "X" && r7 == "X" && r4c == false || r5 == "X" && r6 == "X" && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r2 == "X" && r5 == "X" && r8c == false || r7 == "X" && r9 == "X" && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r3 == "X" && r6 == "X" && r9c == false || r7 == "X" && r8 == "X" && r9c == false || r1 == "X" && r5 == "X" && r9c == false)  {
            r9 = "O";
            r9c = true;
          }
          else if (r4 == "X" && r5 == "X" && r6c == false || r3 == "X" && r9 == "X" && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          // just in case the computer doesn't have a plan
          else if (r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r9c == false) {
            r9 = "O";
            r9c = true;
          }
          else if (r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r5c == false) {
            r5 = "O";
            r5c = true;
          }
        }
      }
      // if the computer goes first
      else {
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        cout << endl << endl << "The computer has been selected to play first. Good luck!\n\n\n";
        drawBoard normal1;
        normal1.normalBoard();
        cout << endl << "The computer is strategizing...\n";
        sleep(5);
        // computer 1st move
        int rp = (rand() % 11);
        if (rp == 0) {
          r1 = "O";
          r1c = true;
        }
        else if (rp == 1) {
          r2 = "O";
          r2c = true;
        }
        else if (rp == 2) {
          r3 = "O";
          r3c = true;
        }
        else if (rp == 3) {
          r4 = "O";
          r4c = true;
        }
        else if (rp == 4) {
          r6 = "O";
          r6c = true;
        }
        else if (rp == 5) {
          r7 = "O";
          r7c = true;
        }
        else if (rp == 6) {
          r8 = "O";
          r8c = true;
        }
        else if (rp == 7) {
          r9 = "O";
          r9c = true;
        }
        else {
          r5 = "O";
          r5c = true;
        }
        while (win == false) {
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal3;
          normal3.normalBoard();
          // check if the player won
          if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
            cout << endl << endl << "Congratulations! You won!";
            win = true;
            break;
          }
          // check if the computer won
          else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
            cout << endl << endl << "Sorry, you lost to the computer.";
            win = true;
            break;
          }
          // check if there was a tie
          else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
            cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
            win = true;
            break;
          }
          stillTurn = true;
          while (stillTurn == true) {
            cout << "\nType in a number that is on the board to place an X there ->";
            cin >> fm2;
            // Player 2nd move
            if (fm2 == 1 && r1c == false) {
              r1 = "X";
              r1c = true;
              stillTurn = false;
            }
            else if (fm2 == 2 && r2c == false) {
              r2 = "X";
              r2c = true;
              stillTurn = false;
            }
            else if (fm2 == 3 && r3c == false) {
              r3 = "X";
              r3c = true;
              stillTurn = false;
            }
            else if (fm2 == 4 && r4c == false) {
              r4 = "X";
              r4c = true;
              stillTurn = false;
            }
            else if (fm2 == 5 && r5c == false) {
              r5 = "X";
              r5c = true;
              stillTurn = false;
            }
            else if (fm2 == 6 && r6c == false) {
              r6 = "X";
              r6c = true;
              stillTurn = false;
            }
            else if (fm2 == 7 && r7c == false) {
              r7 = "X";
              r7c = true;
              stillTurn = false;
            }
            else if (fm2 == 8 && r8c == false) {
              r8 = "X";
              r8c = true;
              stillTurn = false;
            }
            else if (fm2 == 9 && r9c == false) {
              r9 = "X";
              r9c = true;
              stillTurn = false;
            }
          }
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal4;
          normal4.normalBoard();
          // check if the player won
          sleep(3);
          if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
            cout << endl << endl << "Congratulations! You won!";
            win = true;
            break;
          }
          // check if the computer won
          else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
            cout << endl << endl << "Sorry, you lost to the computer.";
            win = true;
            break;
          }
          // check if there was a tie
          else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
            cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
            win = true;
            break;
          }
          // Computer turn X
          if (r1 == "O" && r2 == "O" && r3c == false || r7 == "O" && r5 == "O" && r3c == false || r9 == "O" && r6 == "O" && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r1 == "O" && r3 == "O" && r2c == false || r8 == "O" && r5 == "O" && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r9 == "O" && r5 == "O" && r1c == false || r2 == "O" && r3 == "O" && r1c == false || r7 == "O" && r4 == "O" && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r1 == "O" && r7 == "O" && r4c == false || r6 == "O" && r5 == "O" && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r3 == "O" && r7 == "O" && r5c == false || r9 == "O" && r1 == "O" && r5c == false || r4 == "O" && r6 == "O" && r5c == false || r8 == "O" && r2 == "O" && r5c == false) {
            r5 = "O";
            r5c = true;
          }
          else if (r4 == "O" && r5 == "O" && r6c == false || r3 == "O" && r9 == "O" && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1 == "O" && r4 == "O" && r7c == false || r9 == "O" && r8 == "O" && r7c == false || r3 == "O" && r5 == "O" && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r2 == "O" && r5 == "O" && r8c == false || r7 == "O" && r9 == "O" && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r3 == "O" && r6 == "O" && r9c == false || r1 == "O" && r5 == "O" && r9c == false || r7 == "O" && r8 == "O" && r9c == false) {
            r9 = "O";
            r9c = true;
          }
          // check if the player can win next turn
          else if (r1 == "X" && r2 == "X" && r3c == false || r9 == "X" && r6 == "X" && r3c == false || r7 == "X" && r5 == "X" && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r1 == "X" && r9 == "X" && r5c == false || r3 == "X" && r7 == "X" && r5c == false || r2 == "X" && r8 == "X" && r5c == false || r4 == "X" && r6 == "X" && r5c == false) {
            r5 = "O";
            r5c = true;
          }
          else if (r1 == "X" && r3 == "X" && r2c == false || r8 == "X" && r5 == "X" && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r3 == "X" && r2 == "X" && r1c == false || r7 == "X" && r4 == "X" && r1c == false || r9 == "X" && r5 == "X" && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r1 == "X" && r4 == "X" && r7c == false || r3 == "X" && r5 == "X" && r7c == false || r9 == "X" && r8 == "X" && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r1 == "X" && r7 == "X" && r4c == false || r5 == "X" && r6 == "X" && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r2 == "X" && r5 == "X" && r8c == false || r7 == "X" && r9 == "X" && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r3 == "X" && r6 == "X" && r9c == false || r7 == "X" && r8 == "X" && r9c == false || r1 == "X" && r5 == "X" && r9c == false)  {
            r9 = "O";
            r9c = true;
          }
          else if (r4 == "X" && r5 == "X" && r6c == false || r3 == "X" && r9 == "X" && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          // just in case the computer doesn't have a plan
          else if (r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r9c == false) {
            r9 = "O";
            r9c = true;
          }
          else if (r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r5c == false) {
            r5 = "O";
            r5c = true;
          }
        }
      }
    }
    else if (diff == "easy" || diff == "Easy" || diff == "EASY") {
      cout << endl << endl << "Deciding who will go first...";
      int rp = (rand() % 2);
      if (rp == 0) {
        // if the player is selected to go first
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        cout << endl << endl << "You have been selected to play first! Good luck!\n\n\n";
        drawBoard normal1;
        normal1.normalBoard();
        while (win == false) {
          if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
            cout << endl << endl << "Congratulations! You won!";
            win = true;
            break;
          }
          // check if the computer won
          else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
            cout << endl << endl << "Sorry, you lost to the computer.";
            win = true;
            break;
          }
          // check if there was a tie
          else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
            cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
            win = true;
            break;
          }
          stillTurn = true;
          while (stillTurn == true) {
            cout << "\nType in a number that is on the board to place an X there ->";
            cin >> fm1;
            // Player 1st move
            if (fm1 == 1 && r1c == false) {
              r1 = "X";
              r1c = true;
              stillTurn = false;
            }
            else if (fm1 == 2 && r2c == false) {
              r2 = "X";
              r2c = true;
              stillTurn = false;
            }
            else if (fm1 == 3 && r3c == false) {
              r3 = "X";
              r3c = true;
              stillTurn = false;
            }
            else if (fm1 == 4 && r4c == false) {
              r4 = "X";
              r4c = true;
              stillTurn = false;
            }
            else if (fm1 == 5 && r5c == false) {
              r5 = "X";
              r5c = true;
              stillTurn = false;
            }
            else if (fm1 == 6 && r6c == false) {
              r6 = "X";
              r6c = true;
              stillTurn = false;
            }
            else if (fm1 == 7 && r7c == false) {
              r7 = "X";
              r7c = true;
              stillTurn = false;
            }
            else if (fm1 == 8 && r8c == false) {
              r8 = "X";
              r8c = true;
              stillTurn = false;
            }
            else if (fm1 == 9 && r9c == false) {
              r9 = "X";
              r9c = true;
              stillTurn = false;
            }
            }
            for (int sb = 0; sb < 80; sb++) {
              cout << endl;
            }
            drawBoard normal2;
            normal2.normalBoard();
            sleep(3);
            if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
              cout << endl << endl << "Congratulations! You won!";
              win = true;
              break;
            }
            // check if the computer won
            else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
              cout << endl << endl << "Sorry, you lost to the computer.";
              win = true;
              break;
            }
            // check if there was a tie
            else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
              cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
              win = true;
              break;
            }
            // Computer first move
            if (r1 == "O" && r2 == "O" && r3c == false || r7 == "O" && r5 == "O" && r3c == false || r9 == "O" && r6 == "O" && r3c == false) {
              r3 = "O";
              r3c = true;
            }
            else if (r1 == "O" && r3 == "O" && r2c == false || r8 == "O" && r5 == "O" && r2c == false) {
              r2 = "O";
              r2c = true;
            }
            else if (r9 == "O" && r5 == "O" && r1c == false || r2 == "O" && r3 == "O" && r1c == false || r7 == "O" && r4 == "O" && r1c == false) {
              r1 = "O";
              r1c = true;
            }
            else if (r1 == "O" && r7 == "O" && r4c == false || r6 == "O" && r5 == "O" && r4c == false) {
              r4 = "O";
              r4c = true;
            }
            else if (r3 == "O" && r7 == "O" && r5c == false || r9 == "O" && r1 == "O" && r5c == false || r4 == "O" && r6 == "O" && r5c == false || r8 == "O" && r2 == "O" && r5c == false) {
              r5 = "O";
              r5c = true;
            }
            else if (r4 == "O" && r5 == "O" && r6c == false || r3 == "O" && r9 == "O" && r6c == false) {
              r6 = "O";
              r6c = true;
            }
            else if (r1 == "O" && r4 == "O" && r7c == false || r9 == "O" && r8 == "O" && r7c == false || r3 == "O" && r5 == "O" && r7c == false) {
              r7 = "O";
              r7c = true;
            }
            else if (r2 == "O" && r5 == "O" && r8c == false || r7 == "O" && r9 == "O" && r8c == false) {
              r8 = "O";
              r8c = true;
            }
            else if (r3 == "O" && r6 == "O" && r9c == false || r1 == "O" && r5 == "O" && r9c == false || r7 == "O" && r8 == "O" && r9c == false) {
              r9 = "O";
              r9c = true;
            }
            else {
              int rp = (rand() % 8);
              if (rp == 0 && r1c == false) {
                r1 = "O";
                r1c = true;
              }
              else if (rp == 1 && r2c == false || rp == 0 && r2c == false) {
                r2 = "O";
                r2c = true;
              }
              else if (rp == 2 && r3c == false || rp == 1 && r3c == false || rp == 0 && r3c == false) {
                r3 = "O";
                r3c = true;
              }
              else if (rp == 3 && r4c == false || rp == 2 && r4c == false || rp == 1 && r4c == false || rp == 0 && r4c == false) {
                r4 = "O";
                r4c = true;
              }
              else if (rp == 4 && r6c == false || rp == 3 && r6c == false || rp == 2 && r6c == false || rp == 1 && r6c == false || rp == 0 && r6c == false) {
                r6 = "O";
                r6c = true;
              }
              else if (rp == 5 && r7c == false || rp == 4 && r7c == false || rp == 3 && r7c == false || rp == 2 && r7c == false || rp == 1 && r7c == false || rp == 0 && r7c == false) {
                r7 = "O";
                r7c = true;
              }
              else if (rp == 6 && r8c == false || rp == 5 && r8c == false || rp == 4 && r8c == false || rp == 3 && r8c == false || rp == 2 && r8c == false || rp == 1 && r8c == false || rp == 0 && r8c == false) {
                r8 = "O";
                r8c = true;
              }
              else if (rp == 7 && r9c == false || rp == 6 && r9c == false || rp == 5 && r9c == false || rp == 4 && r9c == false || rp == 3 && r9c == false || rp == 2 && r9c == false || rp == 1 && r9c == false || rp == 0 && r9c == false) {
                r9 = "O";
                r9c = true;
              }
              // just in case the computer doesn't have a plan
              else if (r8c == false) {
                r8 = "O";
                r8c = true;
              }
              else if (r6c == false) {
                r6 = "O";
                r6c = true;
              }
              else if (r1c == false) {
                r1 = "O";
                r1c = true;
              }
              else if (r2c == false) {
                r2 = "O";
                r2c = true;
              }
              else if (r3c == false) {
                r3 = "O";
                r3c = true;
              }
              else if (r7c == false) {
                r7 = "O";
                r7c = true;
              }
              else if (r9c == false) {
                r9 = "O";
                r9c = true;
              }
              else if (r4c == false) {
                r4 = "O";
                r4c = true;
              }
              else if (r5c == false) {
                r5 = "O";
                r5c = true;
              }
            }
            for (int sb = 0; sb < 80; sb++) {
              cout << endl;
            }
            drawBoard normal5;
            normal5.normalBoard();
        }
      }
      else {
        // if the computer is selected to go first
        for (int sb = 0; sb < 80; sb++) {
          cout << endl;
        }
        cout << endl << endl << "The computer has been selected to play first. Good luck!\n\n\n";
        drawBoard normal1;
        normal1.normalBoard();
        cout << endl << "The computer is strategizing...\n";
        sleep(3.5);
        // Computer first move
        if (r1 == "O" && r2 == "O" && r3c == false || r7 == "O" && r5 == "O" && r3c == false || r9 == "O" && r6 == "O" && r3c == false) {
          r3 = "O";
          r3c = true;
        }
        else if (r1 == "O" && r3 == "O" && r2c == false || r8 == "O" && r5 == "O" && r2c == false) {
          r2 = "O";
          r2c = true;
        }
        else if (r9 == "O" && r5 == "O" && r1c == false || r2 == "O" && r3 == "O" && r1c == false || r7 == "O" && r4 == "O" && r1c == false) {
          r1 = "O";
          r1c = true;
        }
        else if (r1 == "O" && r7 == "O" && r4c == false || r6 == "O" && r5 == "O" && r4c == false) {
          r4 = "O";
          r4c = true;
        }
        else if (r3 == "O" && r7 == "O" && r5c == false || r9 == "O" && r1 == "O" && r5c == false || r4 == "O" && r6 == "O" && r5c == false || r8 == "O" && r2 == "O" && r5c == false) {
          r5 = "O";
          r5c = true;
        }
        else if (r4 == "O" && r5 == "O" && r6c == false || r3 == "O" && r9 == "O" && r6c == false) {
          r6 = "O";
          r6c = true;
        }
        else if (r1 == "O" && r4 == "O" && r7c == false || r9 == "O" && r8 == "O" && r7c == false || r3 == "O" && r5 == "O" && r7c == false) {
          r7 = "O";
          r7c = true;
        }
        else if (r2 == "O" && r5 == "O" && r8c == false || r7 == "O" && r9 == "O" && r8c == false) {
          r8 = "O";
          r8c = true;
        }
        else if (r3 == "O" && r6 == "O" && r9c == false || r1 == "O" && r5 == "O" && r9c == false || r7 == "O" && r8 == "O" && r9c == false) {
          r9 = "O";
          r9c = true;
        }
        else {
          int rp = (rand() % 8);
          if (rp == 0 && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (rp == 1 && r2c == false || rp == 0 && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (rp == 2 && r3c == false || rp == 1 && r3c == false || rp == 0 && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (rp == 3 && r4c == false || rp == 2 && r4c == false || rp == 1 && r4c == false || rp == 0 && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (rp == 4 && r6c == false || rp == 3 && r6c == false || rp == 2 && r6c == false || rp == 1 && r6c == false || rp == 0 && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (rp == 5 && r7c == false || rp == 4 && r7c == false || rp == 3 && r7c == false || rp == 2 && r7c == false || rp == 1 && r7c == false || rp == 0 && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (rp == 6 && r8c == false || rp == 5 && r8c == false || rp == 4 && r8c == false || rp == 3 && r8c == false || rp == 2 && r8c == false || rp == 1 && r8c == false || rp == 0 && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (rp == 7 && r9c == false || rp == 6 && r9c == false || rp == 5 && r9c == false || rp == 4 && r9c == false || rp == 3 && r9c == false || rp == 2 && r9c == false || rp == 1 && r9c == false || rp == 0 && r9c == false) {
            r9 = "O";
            r9c = true;
          }
          // just in case the computer doesn't have a plan
          else if (r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r9c == false) {
            r9 = "O";
            r9c = true;
          }
          else if (r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r5c == false) {
            r5 = "O";
            r5c = true;
          }
        }
        while (win == false) {
          for (int sb = 0; sb < 80; sb++) {
            cout << endl;
          }
          drawBoard normal3;
          normal3.normalBoard();
          stillTurn = true;
          while (stillTurn == true) {
            cout << "\nType in a number that is on the board to place an X there ->";
            cin >> fm1;
            // Player 1st move
            if (fm1 == 1 && r1c == false) {
              r1 = "X";
              r1c = true;
              stillTurn = false;
            }
            else if (fm1 == 2 && r2c == false) {
              r2 = "X";
              r2c = true;
              stillTurn = false;
            }
            else if (fm1 == 3 && r3c == false) {
              r3 = "X";
              r3c = true;
              stillTurn = false;
            }
            else if (fm1 == 4 && r4c == false) {
              r4 = "X";
              r4c = true;
              stillTurn = false;
            }
            else if (fm1 == 5 && r5c == false) {
              r5 = "X";
              r5c = true;
              stillTurn = false;
            }
            else if (fm1 == 6 && r6c == false) {
              r6 = "X";
              r6c = true;
              stillTurn = false;
            }
            else if (fm1 == 7 && r7c == false) {
              r7 = "X";
              r7c = true;
              stillTurn = false;
            }
            else if (fm1 == 8 && r8c == false) {
              r8 = "X";
              r8c = true;
              stillTurn = false;
            }
            else if (fm1 == 9 && r9c == false) {
              r9 = "X";
              r9c = true;
              stillTurn = false;
            }
            }
            for (int sb = 0; sb < 80; sb++) {
              cout << endl;
            }
            drawBoard normal4;
            normal4.normalBoard();
            sleep(3);
          if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
            cout << endl << endl << "Congratulations! You won!";
            win = true;
            break;
          }
          // check if the computer won
          else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
            cout << endl << endl << "Sorry, you lost to the computer.";
            win = true;
            break;
          }
          // check if there was a tie
          else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
            cout << endl << endl << "You tied! It isn't something you can brag about, but at least you didn't lose!";
            win = true;
            break;
          }
          if (r1 == "O" && r2 == "O" && r3c == false || r7 == "O" && r5 == "O" && r3c == false || r9 == "O" && r6 == "O" && r3c == false) {
            r3 = "O";
            r3c = true;
          }
          else if (r1 == "O" && r3 == "O" && r2c == false || r8 == "O" && r5 == "O" && r2c == false) {
            r2 = "O";
            r2c = true;
          }
          else if (r9 == "O" && r5 == "O" && r1c == false || r2 == "O" && r3 == "O" && r1c == false || r7 == "O" && r4 == "O" && r1c == false) {
            r1 = "O";
            r1c = true;
          }
          else if (r1 == "O" && r7 == "O" && r4c == false || r6 == "O" && r5 == "O" && r4c == false) {
            r4 = "O";
            r4c = true;
          }
          else if (r3 == "O" && r7 == "O" && r5c == false || r9 == "O" && r1 == "O" && r5c == false || r4 == "O" && r6 == "O" && r5c == false || r8 == "O" && r2 == "O" && r5c == false) {
            r5 = "O";
            r5c = true;
          }
          else if (r4 == "O" && r5 == "O" && r6c == false || r3 == "O" && r9 == "O" && r6c == false) {
            r6 = "O";
            r6c = true;
          }
          else if (r1 == "O" && r4 == "O" && r7c == false || r9 == "O" && r8 == "O" && r7c == false || r3 == "O" && r5 == "O" && r7c == false) {
            r7 = "O";
            r7c = true;
          }
          else if (r2 == "O" && r5 == "O" && r8c == false || r7 == "O" && r9 == "O" && r8c == false) {
            r8 = "O";
            r8c = true;
          }
          else if (r3 == "O" && r6 == "O" && r9c == false || r1 == "O" && r5 == "O" && r9c == false || r7 == "O" && r8 == "O" && r9c == false) {
            r9 = "O";
            r9c = true;
          }
          else {
            int rp = (rand() % 8);
            if (rp == 0 && r1c == false) {
              r1 = "O";
              r1c = true;
            }
            else if (rp == 1 && r2c == false || rp == 0 && r2c == false) {
              r2 = "O";
              r2c = true;
            }
            else if (rp == 2 && r3c == false || rp == 1 && r3c == false || rp == 0 && r3c == false) {
              r3 = "O";
              r3c = true;
            }
            else if (rp == 3 && r4c == false || rp == 2 && r4c == false || rp == 1 && r4c == false || rp == 0 && r4c == false) {
              r4 = "O";
              r4c = true;
            }
            else if (rp == 4 && r6c == false || rp == 3 && r6c == false || rp == 2 && r6c == false || rp == 1 && r6c == false || rp == 0 && r6c == false) {
              r6 = "O";
              r6c = true;
            }
            else if (rp == 5 && r7c == false || rp == 4 && r7c == false || rp == 3 && r7c == false || rp == 2 && r7c == false || rp == 1 && r7c == false || rp == 0 && r7c == false) {
              r7 = "O";
              r7c = true;
            }
            else if (rp == 6 && r8c == false || rp == 5 && r8c == false || rp == 4 && r8c == false || rp == 3 && r8c == false || rp == 2 && r8c == false || rp == 1 && r8c == false || rp == 0 && r8c == false) {
              r8 = "O";
              r8c = true;
            }
            else if (rp == 7 && r9c == false || rp == 6 && r9c == false || rp == 5 && r9c == false || rp == 4 && r9c == false || rp == 3 && r9c == false || rp == 2 && r9c == false || rp == 1 && r9c == false || rp == 0 && r9c == false) {
              r9 = "O";
              r9c = true;
            }
            // just in case the computer doesn't have a plan
            else if (r8c == false) {
              r8 = "O";
              r8c = true;
            }
            else if (r6c == false) {
              r6 = "O";
              r6c = true;
            }
            else if (r1c == false) {
              r1 = "O";
              r1c = true;
            }
            else if (r2c == false) {
              r2 = "O";
              r2c = true;
            }
            else if (r3c == false) {
              r3 = "O";
              r3c = true;
            }
            else if (r7c == false) {
              r7 = "O";
              r7c = true;
            }
            else if (r9c == false) {
              r9 = "O";
              r9c = true;
            }
            else if (r4c == false) {
              r4 = "O";
              r4c = true;
            }
            else if (r5c == false) {
              r5 = "O";
              r5c = true;
            }
          }
        }
      }
    }
  }
  // a match against two players
  else if (dif == "pvp" || dif == "Pvp" || dif == "pvP" || dif == "PvP" || dif == "PVP") {
    int rp = (rand() % 2);
    if (rp == 0) {
      for (int sb = 0; sb < 80; sb++) {
        cout << endl;
      }
      cout << endl << endl << "Player X has been selected to play first. Good luck!\n\n\n";
      while (win == false) {
      drawBoard normal1;
      normal1.normalBoard();
      // check if player X won
      if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
        cout << endl << endl << "Congratulations! Player X won!";
        win = true;
        break;
      }
      // check if player O won
      else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
        cout << endl << endl << "Congratulations! Player O won!";
        win = true;
        break;
      }
      // check if there was a tie
      else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
        cout << endl << endl << "You tied! Good job to the both of you for not letting the other person win!";
        win = true;
        break;
      }
      stillTurn = true;
      while (stillTurn == true) {
        cout << "\n Player X, Type in a number that is on the board to place an X there ->";
        cin >> fm1;
        // Player 1st move
        if (fm1 == 1 && r1c == false) {
          r1 = "X";
          r1c = true;
          stillTurn = false;
        }
        else if (fm1 == 2 && r2c == false) {
          r2 = "X";
          r2c = true;
          stillTurn = false;
        }
        else if (fm1 == 3 && r3c == false) {
          r3 = "X";
          r3c = true;
          stillTurn = false;
        }
        else if (fm1 == 4 && r4c == false) {
          r4 = "X";
          r4c = true;
          stillTurn = false;
        }
        else if (fm1 == 5 && r5c == false) {
          r5 = "X";
          r5c = true;
          stillTurn = false;
        }
        else if (fm1 == 6 && r6c == false) {
          r6 = "X";
          r6c = true;
          stillTurn = false;
        }
        else if (fm1 == 7 && r7c == false) {
          r7 = "X";
          r7c = true;
          stillTurn = false;
        }
        else if (fm1 == 8 && r8c == false) {
          r8 = "X";
          r8c = true;
          stillTurn = false;
        }
        else if (fm1 == 9 && r9c == false) {
          r9 = "X";
          r9c = true;
          stillTurn = false;
        }
        }
      for (int sb = 0; sb < 80; sb++) {
        cout << endl;
      }
      drawBoard normal2;
      normal2.normalBoard();
      // check if player X won
      if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
          cout << endl << endl << "Congratulations! Player X won!";
        win = true;
        break;
      }
      // check if player O won
      else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
          cout << endl << endl << "Congratulations! Player O won!";
        win = true;
        break;
      }
      // check if there was a tie
      else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
          cout << endl << endl << "You tied! Good job to the both of you for not letting the other person win!";
        win = true;
        break;
      }
      stillTurn = true;
      while (stillTurn == true) {
        cout << "\n Player O, Type in a number that is on the board to place an O there ->";
        cin >> fm1;
        // Player 2nd move
        if (fm1 == 1 && r1c == false) {
          r1 = "O";
          r1c = true;
          stillTurn = false;
        }
        else if (fm1 == 2 && r2c == false) {
          r2 = "O";
          r2c = true;
          stillTurn = false;
        }
        else if (fm1 == 3 && r3c == false) {
          r3 = "O";
          r3c = true;
          stillTurn = false;
        }
        else if (fm1 == 4 && r4c == false) {
          r4 = "O";
          r4c = true;
          stillTurn = false;
        }
        else if (fm1 == 5 && r5c == false) {
          r5 = "O";
          r5c = true;
          stillTurn = false;
        }
        else if (fm1 == 6 && r6c == false) {
          r6 = "O";
          r6c = true;
          stillTurn = false;
        }
        else if (fm1 == 7 && r7c == false) {
          r7 = "O";
          r7c = true;
          stillTurn = false;
        }
        else if (fm1 == 8 && r8c == false) {
          r8 = "O";
          r8c = true;
          stillTurn = false;
        }
        else if (fm1 == 9 && r9c == false) {
          r9 = "O";
          r9c = true;
          stillTurn = false;
        }

      }
      for (int sb = 0; sb < 80; sb++) {
        cout << endl;
        }
      }
    }
    else {
      for (int sb = 0; sb < 80; sb++) {
        cout << endl;
      }
      cout << endl << endl << "Player O has been selected to play first. Good luck!\n\n\n";
      while (win == false) {
      drawBoard normal1;
      normal1.normalBoard();
      // check if player X won
      if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
        cout << endl << endl << "Congratulations! Player X won!";
        win = true;
        break;
      }
      // check if player O won
      else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
        cout << endl << endl << "Congratulations! Player O won!";
        win = true;
        break;
      }
      // check if there was a tie
      else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
        cout << endl << endl << "You tied! Good job to the both of you for not letting the other person win!";
        win = true;
        break;
      }
      stillTurn = true;
      while (stillTurn == true) {
        cout << "\n Player O, Type in a number that is on the board to place an O there ->";
        cin >> fm1;
        // Player 1st move
        if (fm1 == 1 && r1c == false) {
          r1 = "O";
          r1c = true;
          stillTurn = false;
        }
        else if (fm1 == 2 && r2c == false) {
          r2 = "O";
          r2c = true;
          stillTurn = false;
        }
        else if (fm1 == 3 && r3c == false) {
          r3 = "O";
          r3c = true;
          stillTurn = false;
        }
        else if (fm1 == 4 && r4c == false) {
          r4 = "O";
          r4c = true;
          stillTurn = false;
        }
        else if (fm1 == 5 && r5c == false) {
          r5 = "O";
          r5c = true;
          stillTurn = false;
        }
        else if (fm1 == 6 && r6c == false) {
          r6 = "O";
          r6c = true;
          stillTurn = false;
        }
        else if (fm1 == 7 && r7c == false) {
          r7 = "O";
          r7c = true;
          stillTurn = false;
        }
        else if (fm1 == 8 && r8c == false) {
          r8 = "O";
          r8c = true;
          stillTurn = false;
        }
        else if (fm1 == 9 && r9c == false) {
          r9 = "O";
          r9c = true;
          stillTurn = false;
        }
      }
      for (int sb = 0; sb < 80; sb++) {
        cout << endl;
      }
      drawBoard normal2;
      normal2.normalBoard();
      // check if player X won
      if (r1 == "X" && r2 == "X" && r3 == "X" || r1 == "X" && r4 == "X" && r7 == "X" || r7 == "X" && r8 == "X" && r9 == "X" || r9 == "X" && r6 == "X" && r3 == "X" || r1 == "X" && r5 == "X" && r9 == "X" || r7 == "X" && r5 == "X" && r3 == "X" || r2 == "X" && r5 == "X" && r8 == "X" || r4 == "X" && r5 == "X" && r6 == "X") {
            cout << endl << endl << "Congratulations! Player X won!";
        win = true;
        break;
      }
      // check if player O won
      else if (r1 == "O" && r2 == "O" && r3 == "O" || r1 == "O" && r4 == "O" && r7 == "O" || r7 == "O" && r8 == "O" && r9 == "O" || r9 == "O" && r6 == "O" && r3 == "O" || r1 == "O" && r5 == "O" && r9 == "O" || r7 == "O" && r5 == "O" && r3 == "O" || r2 == "O" && r5 == "O" && r8 == "O" || r4 == "O" && r5 == "O" && r6 == "O") {
        cout << endl << endl << "Congratulations! Player O won!";
        win = true;
        break;
      }
      // check if there was a tie
      else if (r1c == true && r2c == true && r3c == true && r4c == true && r5c == true && r6c == true && r7c == true && r8c == true && r9c == true) {
        cout << endl << endl << "You tied! Good job to the both of you for not letting the other person win!";
        win = true;
        break;
      }
      stillTurn = true;
      while (stillTurn == true) {
        cout << "\n Player X, Type in a number that is on the board to place an X there ->";
        cin >> fm1;
        // Player 2nd move
        if (fm1 == 1 && r1c == false) {
          r1 = "X";
          r1c = true;
          stillTurn = false;
        }
        else if (fm1 == 2 && r2c == false) {
          r2 = "X";
          r2c = true;
          stillTurn = false;
        }
        else if (fm1 == 3 && r3c == false) {
          r3 = "X";
          r3c = true;
          stillTurn = false;
        }
        else if (fm1 == 4 && r4c == false) {
          r4 = "X";
          r4c = true;
          stillTurn = false;
        }
        else if (fm1 == 5 && r5c == false) {
          r5 = "X";
          r5c = true;
          stillTurn = false;
        }
        else if (fm1 == 6 && r6c == false) {
          r6 = "X";
          r6c = true;
          stillTurn = false;
        }
        else if (fm1 == 7 && r7c == false) {
          r7 = "X";
          r7c = true;
          stillTurn = false;
        }
        else if (fm1 == 8 && r8c == false) {
          r8 = "X";
          r8c = true;
          stillTurn = false;
        }
        else if (fm1 == 9 && r9c == false) {
          r9 = "X";
          r9c = true;
          stillTurn = false;
        }
      }
      for (int sb = 0; sb < 80; sb++) {
        cout << endl;
      }
    }
  }
  }
}
