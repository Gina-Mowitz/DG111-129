#include <stdio.h>

int main()
{

    // วิธีที่ 1: for loop

    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    // แสดงผลลัพธ์ของตัวเลข 1 ถึง 10 โดยใช้ for loop
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("ผลรวม 1 ถึง 10 คือ: %d\n", sum);

    // วิธีที่ 2: while loop

    i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    // แสดงผลลัพธ์ของตัวเลข 1 ถึง 10 โดยใช้ while loop
    int sum2 = 0;
    i = 1;
    while (i <= 10)
    {
        sum2 += i;
        i++;
    }
    printf("ผลรวม 1 ถึง 10 คือ: %d\n", sum2);

    // วิธีที่ 3: do-while loop

    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    // แสดงผลลัพธ์ของตัวเลข 1 ถึง 10 โดยใช้ do-while loop
    int sum3 = 0;
    i = 1;
    do
    {
        sum3 += i;
        i++;
    } while (i <= 10);
    printf("ผลรวม 1 ถึง 10 คือ: %d\n", sum3);

    return 0;
}