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
    printf("Favorite Subject: ");
    scanf("%s", favorite_subject);
    // แสดงค่าและขนาด
    printf(" === Personal Information === \n");
    printf("Name             : %s \n", name);
    printf("Age              : %d year old\n", age);
    printf("GPA              : %1.2f \n", gpa);
    printf("Favorite Subject : %s \n", favorite_subject);

    return 0;
}