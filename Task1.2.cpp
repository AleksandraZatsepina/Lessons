#include <iostream>

using namespace std;

int main()
{
    printf("Найдем длину окружности L \n");
    float d;
    const float PI = 3.14;
    cout << "Введите диаметр окружности\n d = ";
    cin >> d;
    float L = PI * d;
    cout << "Длина окружности L = " << L << endl;
    return 0;
}
