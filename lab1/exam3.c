#include <stdio.h>
#include  <math.h>

int main()
{
    float a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    float g = sqrt(a*a+b*b);
    float S = a*b/2;

    printf("Гипотенуз: %d\n", g);
    printf("Талбай: %d", S);
    
    return 0;
}