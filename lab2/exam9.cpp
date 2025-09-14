#include <iostream>
using namespace std;

// 9. Хүснэгтийг өсөх/буурахаар эрэмбэл.

void swapNumbers(int &a, int &b)// 2 тооны байрыг солих функц
{
    int temp = a;
    a = b;
    b = temp;
}

void sortByDescending(int array[], int n) // selection sort-оор хүснэгтийг буурахаар эрэмбэлэх функц
{
    for (int i = 0; i < n - 1; ++i)
    {
        int max = i; // хамгийн ихийг хайна

        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] > array[max])
            { // өсөх биш буурах нөхцөл
                max = j;
            }
        }
        swapNumbers(array[i], array[max]);
    }
}

void sortByAscending(int array[], int n) // selection sort-оор хүснэгтийг өсөхөөр эрэмбэлэх функц
{
    for (int i = 0; i < n - 1; ++i)
    {
        int min = i;

        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swapNumbers(array[i], array[min]);
    }
}

void printArray(int arr[], int n) // хүснэгтийг хэвлэх
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
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

    sortByAscending(array, N);

    cout << "Хүснэгтийг өсөхөөр эрэмбэлэвэл" << endl;
    printArray(array, N);

    sortByDescending(array, N);

    cout << "Хүснэгтийг буурахаар эрэмбэлэвэл" << endl;
    printArray(array, N);

    return 0;
}
// g++ exam9.cpp -o exam9
// ./exam9