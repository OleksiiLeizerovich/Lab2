#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "uk_UA.UTF-8");
    cout << setprecision(2) << fixed;
    double a = 21.4, b = 1.95, x = 4.6, pi = 3.14, t1 = 0, t2 = 0, t = 0;
    for (int i = 0; i <= 7; i++)
    {
        t1 = pi - pow(x, 2);
        t2 = sin(sqrt(2.1 * b + x * log(a)));
        t = t1 * t2;
        cout << "При X= " << x << endl
             << "T=" << t << endl;
        x += 1.5;
    }
    return 0;
}