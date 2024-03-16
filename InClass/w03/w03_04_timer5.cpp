#include <iostream>
#include <ctime>
#include "w03_04_timer5.h"
using namespace std;
int main(){
    Timer tmr1;
    Timer tmr2(time(NULL));

    tmr1.start();
    sleep(2);
    cout << "tmr1.start=" << tmr1.getStart() 
        << ", \nelapsed time =" << tmr1.getElapsedTime() << endl;
    cout << "tmr2.start=" << tmr2.getStart() 
        << ", \nelapsed time =" << tmr2.getElapsedTime() << endl;
    return 0;
}