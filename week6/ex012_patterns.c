#include <stdio.h>

int main()
{

    // 1: Triangle
    printf("โจทย์ 1: Triangle\n");
    printf("\n");
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // 2: Square (n=4)
    printf("โจทย์ 2: Square (n=4)\n");
    printf("\n");
    int n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // 3: Diamond (n=3)
    printf("โจทย์ 3: Diamond (n=3)\n");
    printf("\n");
    n = 3;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}