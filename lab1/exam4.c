#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);

    float a = sqrt(x1 * x1 + y1 * y1);
    float b = sqrt(x2 * x2 + y2 * y2);
    float c = sqrt(x3 * x3 + y3 * y3);

    if (a > b > c)
    {
        printf("Хамгийн ойр цэг: (%d, %d)\n", x3, y3);
        printf("Хамгийн хол цэг: (%d, %d)\n", x1, y1);
    }
    else if (a > c > b)
    {
        printf("Хамгийн ойр цэг: (%d, %d)\n", x2, y2);
        printf("Хамгийн хол цэг: (%d, %d)\n", x1, y1);
    }
    else if (b > c > a)
    {
        printf("Хамгийн ойр цэг: (%d, %d)\n", x1, y1);
        printf("Хамгийн хол цэг: (%d, %d)\n", x2, y2);
    }
    else if (b > a > c)
    {
        printf("Хамгийн ойр цэг: (%d, %d)\n", x3, y3);
        printf("Хамгийн хол цэг: (%d, %d)\n", x2, y2);
    }
    else if (c > a > b)
    {
        printf("Хамгийн ойр цэг: (%d, %d)\n", x2, y2);
        printf("Хамгийн хол цэг: (%d, %d)\n", x3, y3);
    }
    else
    {
        printf("Хамгийн ойр цэг: (%d, %d)\n", x1, y1);
        printf("Хамгийн хол цэг: (%d, %d)\n", x3, y3);
    }

    return 0;
}