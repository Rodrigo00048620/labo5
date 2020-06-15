#include <iostream>
#include <ctime> // libreria de hora
using namespace std;
int main(){
    time_t tSac = time(NULL);
    tm  tms = *localtime(&tSac); //tm se utiliza para diferentes funciones como tm_hour,sec,min
    tms.tm_sec = tms.tm_sec + 1;
    cout << "hh:mm:ss " << tms.tm_hour << ":" << tms.tm_min << ":"<< tms.tm_sec  << endl;
}