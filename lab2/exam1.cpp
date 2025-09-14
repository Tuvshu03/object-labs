#include <iostream>
using namespace std
;
// 1. a, b, c гурван тооны хамгийн ихийг олж дэлгэцэнд хэвэл.

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // a, b тоог жишээд хэрвээ b нь их бол а-д b-ийн утгыг өгнө. Үгүй бол b нь их гэсэн үг. 
    // Дараа нь a, c-г жишээд с нь их бол а-д c-ийн утгыг өгөөд а-г хэвлэнэ.
    if(b>a) a = b; 
    if(c>a) a = c;

    cout << "хамгийн их тоо = " << a << endl;
    return 0;
}
// g++ exam1.cpp -o exam1
// ./exam1