/* 11.Largest of three numbers. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the largest among all", a);
    }
    else if (b > c)
    {
        printf("%d is the largest among all", b);
    }
    else
    {
        printf("%d is the largest among all", c);
    }
    return 0;
}