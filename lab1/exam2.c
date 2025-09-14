#include <stdio.h>

struct Number
{
    int digit;
    int repeat;
};

int main()
{
    int a;
    scanf("%d", &a);

    int counter[10] = {0}, digit;

    int temp = a;

    for (int i = 0; i < 10; i++)
    {
        while (temp > 0)
        {
            digit = temp % 10;
            temp /= 10;
            if (i == digit)
            {
                counter[i]++;
            };
        }
        temp = a;
    };

    int mostRepeated = -1;
    int repeatedNumber = -1;

    for (int i = 0; i < 10; i++)
    {
        if (counter[i] > mostRepeated)
        {
            mostRepeated = counter[i];
            repeatedNumber = i;
        }
    }

    printf("хамгийн их давтагдсан тоо: %d", repeatedNumber);
    return 0;
}
