#include <iostream>
using namespace std;
int main (){
    cout << "Ingrese el dividendo" << endl;
    int x;
    cin >> x;
    cout << "Ingrese el divisor" << endl;
    int y;
    int z;
    cin >> y;
    do{
        
        z = x % y;
        if(z != 0){
            x = y;
            y = z;           
        }

    } while (z != 0);
        cout << "El MCD es: " << y << endl;
        return 0;
} 
