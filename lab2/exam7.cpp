#include <iostream>
using namespace std;

// 7. Өгөгдсөн хүснэгтийн тэгш элементүүдийн тоог ол.

int EvenNumbers(int array[], int N) // Хүснэгтийн тэгш элементийн тоог олох функц
{
    int even = 0;
    for (int i = 0; i < N; i++)
    {
        if (array[i] % 2 == 0) even++;
    }
    return even;
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

    int even = EvenNumbers(array, N);

    cout << "Хүснэгтийн тэгш элементийн тоо = " << even << endl;
    return 0;
}
// g++ exam7.cpp -o exam7
// ./exam7