#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout << "Ingrese un numero equivalente  dd" << endl;
    cin >> x;
    if (x > 0 && x <= 31){
        cout << "ingrese un numero equivalente  mm" << endl;
        cin >> y; 
        if (y > 0 && y <=12){
            cout << "ingrese un numero equivalente aa" << endl;
            cin >> z;
            if (z > 0){
                x = x + 1;
                if (x > 32){
                    cout << "Te equivocaste :O" << endl;
                }else if (y%4==0 && y%100!=0 || y%400==0){
                    cout << "La fecha es: " << x << ":" << y << ":" << z << " El a\244o es bisiesto" << endl;
                }else{
                     cout << "La fecha es: " << x << ":" << y << ":" << z << " El a\244o no es bisiesto" << endl;
                }
                
            }else{
                cout << "Te equivocaste :O" << endl;
            }
            
        }else{
            cout << "Te equivocaste :O" << endl;
        }
        
    }else{
        cout << "Te equivocaste :O" << endl;
    }
    
    
}