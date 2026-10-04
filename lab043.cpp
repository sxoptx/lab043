// lab043.cpp
// Дем'ян Аліна
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 7

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double xp;
    double xk;
    double dx;
    double x;
    double F;

    cout << "a = ";  cin >> a;
    cout << "b = ";  cin >> b;
    cout << "c = ";  cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "F" << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 5 && c != 0)
            F = -a * x * x - b;
        else
            if (x > 5 && c == 0)
                F = (x - a) / x;
            else
                F = -x / c;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dx;
    }
    cout << "----------------------" << endl;

    cin.get();
    cin.get();
    return 0;
}