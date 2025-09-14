#include <iostream>
#include <cmath>
using namespace std;

// 3. Тэгш өнцөгтийн талуудыг өгөхөд талбайг буцаадаг хэрэглэгчийн функц бич.

// Тэгш өнцөгтийн талбай олох функц
int FindArea(int a, int b)
{
    int S = a * b;
    return S;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int S = FindArea(a, b);
    cout << S << endl;
    return 0;
}
// g++ exam3.cpp
// ./exam3