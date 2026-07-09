#include <stdio.h>
int main()
{
    // กำหนดค่าตัวแปร
    char name[50];
    int age;
    float gpa;
    char favorite_subject[50];
    // รับข้อมูลจากผู้ใช้
    printf(" === Enter Data === \n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &gpa);
    printf("Major: ");
    scanf("%s", favorite_subject);
    // แสดงค่าและขนาด
    printf(" === Personal Information === \n");
    printf("┌──────────────────────┐\n");
    printf("│Name  : %-14s│\n", name);
    printf("│Age   : %-1d years old  │\n", age);
    printf("│GPA   : %-14.2f│\n", gpa);
    printf("│Major : %-14s│\n", favorite_subject);
    printf("└──────────────────────┘\n");

    return 0;
}