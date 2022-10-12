// Lab_03_2.cpp
// < Могила Тарас Русланович >
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 21
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    double a;
    double x;
    double b;
    double c;
    double F = 0.0;
    
    
    cout <<"a = "; cin >> a;
    cout <<"x = "; cin >> x;
    cout <<"b = "; cin >> b;
    cout <<"c = "; cin >> c;
    
// first way
    
    if (x < 0 && b!=0)
    {
        F = a *(x*x) + b;
    }
    
    if (x > 0 && b == 0)
    {
        F = (x - a) / (x - c);
    }
    
    if (!(x < 0 && b!=0) && !(x > 0 && b == 0))
    {
        F = x / c;
    }
    
    cout<<endl;
    cout << "1)F = " << F << endl;

//    second way
    
    if (x < 0 && b!=0)
    {
        F = a *(x*x) + b;
    }
    
    else if (x > 0 && b == 0)
    {
        F = (x - a) / (x - c);
    }
    
    else
    {
        F = x / c;
    }
    
    cout << "2)F = " << F << endl;
    cin.get();
    
    return 0;
}
