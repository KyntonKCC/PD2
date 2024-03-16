#include "w03_06_timer7.h"
Timer::Timer(){
    setStart(0);
}
Timer::Timer(time_t s){
    setStart(s);
}
void Timer::start(){
    setStart(time(NULL));
}
void Timer::setStart(time_t ts){
    start_ts = (ts > 0) ? ts : time(NULL);
}
time_t Timer::getStart(){
    return start_ts;
}
int Timer::getElapsedTime(){
    return time(NULL) - getStart();
}