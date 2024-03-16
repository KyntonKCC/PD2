#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "w04_01_sudoku.h"
using namespace std;

int main(void){
    int sudoku_in[Sudoku::sudokuSize];
    Sudoku su_tmp;
    vector<Sudoku> su;
    ifstream in("w04_01_su_iofile", ios::in);
    int num_element, num_case;
    in >> num_case; // num_case is not used in this program
    
    cout << "size = " << su.size() << endl; 
    num_element = 0;
    while(in >> sudoku_in[num_element++]){  //read in map
        if(num_element >= Sudoku::sudokuSize){
            su_tmp.setMap(sudoku_in);
            num_element = 0;
            su.push_back(su_tmp);
        }
    }
    cout << "size = " << su.size() << endl;

    // cout << su[0].isCorrect() << endl;
    for(int i = 0; i < su.size(); i++)
        if(su.at(i).isCorrect())   //validation results
            cout << "CORRECT\n";
        else
            cout << "INCORRECT\n";
    return 0;
}