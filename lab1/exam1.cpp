#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a < 10000 || a > 99999) {
        cout << "Aldaa: 5 orontoi too oruulna uu." << endl;
        return 0;
    }

    int product = 1;
    int temp = a;

    for (int i = 0; i < 5; ++i) {
        int digit = temp % 10;
        product = product* digit;
        temp /= 10;     
    }

    cout << product << endl;
    return 0;
}
