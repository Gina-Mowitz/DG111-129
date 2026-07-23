#include <stdio.h>

int main()
{
    int day;

    printf("Day: ");
    scanf("%d", &day);

    printf("%d → ", day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid input.");
    }

    if (day >= 1 && day <= 5)
    {
        printf(" (Weekday)");
    }
    else if (day == 6 || day == 7)
    {
        printf(" (Weekend!)");
    }

    return 0;
}