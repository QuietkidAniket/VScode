#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main(){
vector<char>board(64, '_');
    string temp;
    cin>> temp;
    temp+= ',';
    char pos[3];
    int c = -1;
    for(string::iterator i = temp.begin(); i != temp.end();i++){
        if(*i == ','){
            board[ stoi((string)(pos+1))  - 1] = pos[0];
            c = -1;
        }else{
            pos[++c] = *i;
        }
    }

for(int i = 0; i < board.size(); i++){
    cout << board[i] << ' ';
    if((i+1) % 8 == 0)cout<< '\n';
}   
    return 0;
}



// This is a problem on printing the given data on
// screen in a particular format according to given rules. The data represents
// current status of a game of chess.
// The pieces are named K (for King),
// Q (for Queen)
// B (for Bishop)
// N (for Horse/Knight)
// R (for Rook/Elephant)
// P (for Pawn/Soldier)
// The above names are used for Black pieces.
// For White pieces the same is used, but instead of capitals, it will be
// small letters: k,q,b,n,r,and p.
// Each square of the 8 × 8 chess board is given a serial number from 1 to
// 64, with top row getting numbers 1 to 8, second row is given number 9 to
// 16 etc.
// The game status is your input data:
// (i) Input is a comma separated string
// (ii) Format of input is like ”K4,Q5,n23”.
// (iii) This means Black King is present in square number 4, Black Queen is
// in square number 5, and White Knight in square number 23.
// (iv) Input string can be short or long depending on the number of pieces
// present in the board.
// (v) The data string is presented in the increasing order of serial numbers,
// obviously omitting numbers corresponding to empty squares.
// Your job is to print the current status of the “chess board” in 8 lines/rows
// of output in the following format:
// 1
// • each line should have exactly 16 characters.
// • the character should be name of the piece in that position followed by
// a space character.
// • for an empty square, an underscore ‘ ’ should be printed.
// An example output:
// R N K Q B R
// P P P P
// B P p P n
// q p b
// (just top 5 of the 8 rows of the board is shown above) Your printing
// should take care that, e.g., 3rd square of all the rows should be vertically
// aligned as shown above).