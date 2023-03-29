#include <iostream>
#include "Source.h"
using namespace std;
template <typename T>
T tmain() 
{
    setlocale(LC_ALL, "ru"); 
    cout << 'я ';
    int n;
    while (true)
    {
        
        cout << "Введите размерность задачи: ";
        cin >> n;
        if (n == 0) break;
        while (n < 0)
        {
            cout << "Ошибка! Размерность - не отрицательное число.\n";
            continue;
        }

        T* a = new T[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Введите значение a" << i + 1 << ": ";
            cin >> a[i];
        }

        T* b = new T[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Введите значение a" << i + 1 << ": ";
            cin >> b[i];
        }

        T a_length = vector_length(a, n);
        cout << "Длина вектора а: " << a_length << "\n";

        T b_length = vector_length(b, n);
        cout << "Длина вектора b: " << b_length << "\n";

        T ab_angle = angle(a, b, n);
        cout << "Угол между векторами a и b: " << ab_angle << "\n\n";

        delete[]a;
        delete[]b;
    }
    return 1;
}


int main()
{
    tmain<double>();
}