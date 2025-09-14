#include <iostream>
using namespace std
;
// 4. Өгөгдсөн N хүртэлх тооны нийлбэр, арифметик дундажыг ол.

float FindAverage(int array[], int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return sum / N; 
}

int main()
{
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    float averageNumber = FindAverage(array, N);
    cout << averageNumber << endl;
    return 0;
}
// g++ exam4.cpp -o exam4
// ./exam4