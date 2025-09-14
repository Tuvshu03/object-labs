#include <iostream>
using namespace std;

// 5. Гараас өгөгдсөн N ширхэг тооны нийлбэр, үржвэрийг ол.

int SumArray(int array[], int N)//Хүснэгтийн нийлбэрийг олох функц
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cout << sum;
        sum = sum + array[i];
    }
    return sum;
}
long MultiplyArray(int array[], int N)//Хүснэгтийн үржвэрийг олох функц
{
    int multiply = 1;
    for (int i = 0; i < N; i++)
    {
        multiply *= array[i];
    }
    return multiply;
}

int main()
{
    int N;
    cout << "N=";
    cin >> N;//Хүснэгтийн элементийн тоо
    int array[N];
    for (int i = 0; i < N; i++)//Хүснэгтэд утга оноох
    {
        cin >> array[i];
    }
    int sum = SumArray(array, N);
    long multiply = MultiplyArray(array, N);
    cout << "Хүснэгтийн нийлбэр=" << sum << endl;
    cout << "Хүснэгтийн үржвэр=" << multiply << endl;
    return 0;
}
// g++ exam5.cpp -o exam5
// ./exam5