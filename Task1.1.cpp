#include <iostream>
using namespace std;

int main()
{
    int a, b, S, P;
    printf("Выведем площадь и периметр прямоугольника \n");
    cout << "Введите сторону a = ";
    cin >> a;
    cout << "Введите сторону b = ";
    cin >> b;
    S = a * b;
    cout << "Площадь треугльника = " << S <<
        endl;
    P = 2 * (a + b);
    cout << "Периметр треугольника = " << P <<
        endl;
    return 0;
}
