#include <iostream>
using namespace std;
// 4. Өгөгдсөн N хүртэлх тооны нийлбэр, арифметик дундажыг ол.

int main()
{
    int N;
    cout << "N=";
    cin >> N; // Хүснэгтийн элементийн тоо
    int array[N];
    for (int i = 0; i < N; i++) // Хүснэгтэд утга оноох
    {
        cin >> array[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    cout << "нийлбэр=" << sum << endl;
    cout << "арифметик дундаж=" << sum / N << endl;
    return 0;
}
// g++ exam4.cpp -o exam4
// ./exam4