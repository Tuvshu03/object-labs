#include <iostream>
#include <math.h>
using namespace std;

// 10. Өгөгдсөн тоо анхны тоо эсэхийг шалга.

bool CheckPrimeNumber(int a)
{
    int m = sqrt(a);
    int b = 0;
    for (int i = 2; i <= m; i++)
    {
        if (a % i == 0)
        {
            b = 1;
            break;
        }
    }
    if (b == 1)
        return false;
    else
        return true;
}
int main()
{
    int a;
    cin >> a;
    bool prime = CheckPrimeNumber(a);

    if (prime == false)
        cout << a << " анхны тоо биш";

    else
        cout << a << " анхны тоо мөн";

    return 0;
}
// g++ exam10.cpp -o exam10
// ./exam10