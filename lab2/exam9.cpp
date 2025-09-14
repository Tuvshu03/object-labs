#include <iostream>
using namespace std;

// 6. Өгөгдсөн N ширхэг тооны хамгийн их/хамгийн багийг ол.

int MaxArray(int array[], int N) // Хүснэгтийн нийлбэрийг олох функц
{
    int max = array[0];
    for (int i = 0; i < N; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}

int MinArray(int array[], int N) // Хүснэгтийн нийлбэрийг олох функц
{
    int min = array[0];
    for (int i = 0; i < N; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
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
    int max = MaxArray(array, N);
    long min = MinArray(array, N);
    cout << "Хүснэгтийн хамгийн их тоо = " << max << endl;
    cout << "Хүснэгтийн хамгийн бага тоо = " << min << endl;
    return 0;
}
// g++ exam6.cpp -o exam6
// ./exam6