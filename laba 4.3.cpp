#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, X_start, X_end, dX;

    // Введення значень з клавіатури
    cout << "Введіть значення a: ";
    cin >> a;

    cout << "Введіть значення b: ";
    cin >> b;

    cout << "Введіть значення c: ";
    cin >> c;

    cout << "Введіть початкове значення X: ";
    cin >> X_start;

    cout << "Введіть кінцеве значення X: ";
    cin >> X_end;

    cout << "Введіть крок dX: ";
    cin >> dX;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    double x = X_start;
    double F;

    while (x <= X_end) {
        if (c < 0 && x != 0)
            F = -a * x - c;
        else if (c > 0 && x == 0)
            F = (x - a) / (-c);
        else
            F = (b * x) / (c - a);

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dX;
    }

    cout << "---------------------------" << endl;

    return 0;
}

