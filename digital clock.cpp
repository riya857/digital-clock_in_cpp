#include<iostream>
#include<ctime>
#include<unistd.h>
#include<iomanip>
using namespace std;
int main(){
    while(true){
        time_t now=time(0);
        tm *ltm = localtime(&now);
        cout << "\rcurrent time: ";
        cout << ltm->tm_hour << ":"
        << ltm->tm_min << ":"
        << ltm->tm_sec;
        sleep(1);
    }
    return 0;
}