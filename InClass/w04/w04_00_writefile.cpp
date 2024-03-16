#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    string name;
    float proj, exam;
    ofstream outFile("w04_00_iofile", ios::out);
    if(!outFile){
        cerr << "Failed opening" << endl;
        exit(1);
    }
    cout << "Enter NAME PROJ EXAM each line.\n"
        << "EOF to finish.\n" << "? ";
    outFile << "Name\tProj\tExam\tTital\n";

    while(cin >> name >> proj >> exam){
        outFile << name << "\t" << proj << "\t" << exam << "\t" 
            << proj * 0.65 + exam * 0.35 << endl;
        cout << "? ";
    }
    cout << endl;
    return 0;
}