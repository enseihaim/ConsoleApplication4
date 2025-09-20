#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

class sqr {
    static int count; 

public:
    
    static double trHeron(double a, double b, double c)
    {
        double s = (a + b + c) / 2.0;
        count++;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    static double trHeight(double base, double height)
    {
        count++;
        return 0.5 * base * height;
    }

    static double rectangle(double length, double width)
    {
        count++;
        return length * width;
    }

    static double square(double side)
    {
        count++;
        return side * side;
    }

    static double romb(double d1, double d2) {
        count++;
        return 0.5 * d1 * d2;
    }

    static int Count() {
        return count;
    }
};

int sqr::count = 0;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 


    cout << "Площа трикутника (формула Герона): " << sqr::trHeron(3, 4, 5) << endl;

    cout << "Площа трикутника (через основу і висоту): " << sqr::trHeight(6, 4) << endl;

    cout << "Площа прямокутника: " << sqr::rectangle(2, 8) << endl;

    cout << "Площа квадрата: " << sqr::square(2) << endl;

    cout << "Площа ромба: " << sqr::romb(1, 9) << endl;

    cout << "Кількість підрахунків площ: " << sqr::Count() << endl;
}
