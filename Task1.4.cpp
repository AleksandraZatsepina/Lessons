#include <iostream>

using namespace std;

int main()
{
    printf("Найдем сумму, разность, произведение и частное квадратов чисел a и b\n");
    float a, b;
	cout << "Введите a = ";
    cin >> a;
    cout << "Введите b = ";
    cin >> b;
    float S = (a * a) + (b * b);
    float R = (a * a) - (b * b);
    float P = (a * a) * (b * b);
    float K = (a * a)  / (b * b);
    cout << "(a * a) + (b * b) = " << S << endl;
	cout << "(a * a) - (b * b) = " << R << endl;
	cout << "(a * a) * (b * b) = " << P << endl;
	cout << "(a * a)  / (b * b) = " << K << endl;
    return 0;
}
