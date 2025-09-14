#include <iostream>
using namespace std;

// 8. Өгөгдсөн хүснэгтийн арифметик дунджийг олдог хэрэглэгчийн функц бич.

int AverageNumbers(int array[], int N) // Хүснэгтийн арифметик дунджийг олох функц
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return sum/N;
}
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

    float average = AverageNumbers(array, N);
    cout << "арифметик дундаж=" << average << endl;
    return 0;
}
// g++ exam8.cpp -o exam8
// ./exam8