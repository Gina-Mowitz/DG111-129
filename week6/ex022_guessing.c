#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 1. ตั้งค่า Seed สำหรับสุ่มตัวเลข
    srand(time(NULL));
    // 2. สุ่มตัวเลขระหว่าง 1 ถึง 100
    int target = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    printf("=== Number Guessing Game (1-100) ===\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target)
        {
            printf("Too low!\n");
        }
        else if (guess > target)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}