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
    float S = a + b;
    float R = a - b;
    float P = a * b;
    float K = (a * a)  / (b * b);
    cout << "a + b = " << S << endl;
	cout << "a - b = " << R << endl;
	cout << "a * b = " << P << endl;
	cout << "(a * a)  / (b * b) = " << K << endl;
    return 0;
}
