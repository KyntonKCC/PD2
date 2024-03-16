#include <iostream>
#include <cstdlib>
#include <fstream>
#include "w04_01_sudoku.h"
#define MAX_CASE 100
using namespace std;

int main(void){
    int sudoku_in[Sudoku::sudokuSize];
    Sudoku su[MAX_CASE];
    ifstream in("w04_01_su_iofile", ios::in);
    int num_case;
    in >> num_case;
    for(int j = 0; j < num_case; j++){
        for(int i = 0; i < Sudoku::sudokuSize; i++)
            in >> sudoku_in[i];         //read in map
        su[j].setMap(sudoku_in);        //set map
    }
    for(int j = 0; j < num_case; j++){  //print out the maps
        for(int i = 0; i < Sudoku::sudokuSize; i++){
            cout << su[j].getElement(i) << " ";
            if(i % 9 == 8)
                cout << endl;
        }
        if(su[j].isCorrect())   //validation results
            cout << "CORRECT\n";
        else
            cout << "INCORRECT\n";
    }
    return 0;
}