#include <iostream>
using namespace std;

class Timer{
    public: 
        void hello(){
            cout << "Hello C++!!!" << endl;
        }
};

int main(){
    Timer tmr;
    tmr.hello();
    return 0;
}