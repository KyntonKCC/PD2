#include <ctime>
using namespace std;
class Timer{
    private:
        time_t start_ts;
    public:
        Timer();
        Timer(time_t s);
        void start();
        void setStart(time_t ts);
        time_t getStart();
        int getElapsedTime();
};