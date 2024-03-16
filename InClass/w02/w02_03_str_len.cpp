#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char ** argv){
#ifdef DEBUG
    cout << argv[1] << "\n";
#endif
    cout << strlen(argv[1]) << "\n";
    return 0;
}