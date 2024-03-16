#include <iostream>
#include <ctime>    // for time()
#include <unistd.h> // for sleep()
using namespace std;

class Timer{
    private:
        time_t start_ts;
    public: 
        void setStart(time_t ts){
            start_ts = ts;
        }
        time_t getStart(){
            return start_ts;
        }
        int getElapsedTime1(){
            return time(NULL);
        }
        int getElapsedTime2(){
            return time(NULL) - getStart();
        }
};

int main(){
    Timer tmr;
    time_t ts;

    ts = time(NULL);
    tmr.setStart(ts);
    sleep(2);

    cout << "Started Time: " << tmr.getStart() << endl;
    cout << "ElapsedTime1: " << tmr.getElapsedTime1() << endl;
    cout << "ElapsedTime2: " << tmr.getElapsedTime2() << endl;
    return 0;
}