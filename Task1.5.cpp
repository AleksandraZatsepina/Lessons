#include <iostream>

using namespace std;

int main()
{
    printf("Найдем сумму, разность, произведение и частное модулей чисел a и b\n");
    float a, b, A, B;
	cout << "Введите a = ";
    cin >> a;
    cout << "Введите b = ";
    cin >> b;
    A = abs(a);
    B = abs(b);
    cout << "Модуль a = " << A << endl;
    cout << "Модуль b = " << B << endl;
    float S = A + B;
    float R = A - B;
    float P = A * B;
    float K = A / B;
    cout << "Сумма a и b = " << S << endl;
	cout << "Разность a и b = " << R << endl;
	cout << "Произведение a и b = " << P << endl;
	cout << "частное модулей чисел a и b = " << K << endl;
    return 0;
}
