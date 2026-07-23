#include <stdio.h>

int main()
{
    int grade;

    printf("Score: ");
    scanf("%d", &grade);

    printf("Score: %d →", grade);

    if (grade >= 80)
    {
        printf(" Grade: A (4.0)");
    }
    else if (grade >= 75)
    {
        printf(" Grade: B+ (3.5)");
    }
    else if (grade >= 70)
    {
        printf(" Grade: B (3.0)");
    }
    else if (grade >= 65)
    {
        printf(" Grade: C+ (2.5)");
    }
    else if (grade >= 60)
    {
        printf(" Grade: C (2.0)");
    }
    else if (grade >= 55)
    {
        printf(" Grade: D+ (1.5)");
    }
    else if (grade >= 50)
    {
        printf(" Grade: D (1.0)");
    }
    else
    {
        printf(" Grade: F (0.0)");
    }

    if (grade >= 50)
    {
        printf(" — Pass");
    }
    else
    {
        printf(" — Fail");
    }

    return 0;
}