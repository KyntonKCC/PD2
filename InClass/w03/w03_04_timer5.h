#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;
class Timer{
    private:
        time_t start_ts;
    public:
        Timer(){
            start_ts = 0;
        }
        Timer(time_t s){
            setStart(s);
        }
        void start(){
            start_ts = time(NULL);
        }
        void setStart(time_t ts){
            start_ts = ts;
        }
        time_t getStart(){
            return start_ts;
        }
        int getElapsedTime(){
            return time(NULL) - getStart();
        }
};