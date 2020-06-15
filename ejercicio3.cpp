#include <iostream>
using namespace std;
int main(){
    cout << "ingrese un cualquier año" << endl;
    int a;
    cin >> a;
    if (a%4==0 && a%100!=0 || a%400==0){
        cout << "es bisiesto" << endl;
    }else{
        cout << "No es bisiesto" << endl;
    }
}