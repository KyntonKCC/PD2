#include <iostream>
using namespace std;

class Timer{
    public: 
        void hello(){
            cout << "Hello C++!!!" << endl;
        }
};

int main(){
    Timer tmr;      // create object tmr
    tmr.hello();    // call member function hello()
    return 0;
}