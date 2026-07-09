#include <stdio.h>
int main()
{
    // กำหนดค่าตัวแปร
    char name[50];
    int Max_HP;
    int attack_Power;
    int defense;
    int level;
    float power_score;
    // รับข้อมูลจากผู้ใช้
    printf(" === Enter Character Stats === \n");
    printf("Name: ");
    scanf("%s", name);
    printf("Max HP: ");
    scanf("%d", &Max_HP);
    printf("Attack Power: ");
    scanf("%d", &attack_Power);
    printf("Defense: ");
    scanf("%d", &defense);
    printf("Level: ");
    scanf("%d", &level);
    power_score = (attack_Power * 2 + defense + Max_HP / 10);
    // แสดงค่าและขนาด
    printf("=== Character sheet === \n");
    printf("╔════════════════════════════╗\n");
    printf("║  %-26s║\n", name);
    printf("╠════════════════════════════╣\n");
    printf("║Level: %-21d║\n", level);
    printf("║HP   : %-1d/%-17d║\n", Max_HP, Max_HP);
    printf("║ATK  : %-21d║\n", attack_Power);
    printf("║DEF  : %-21d║\n", defense);
    printf("╠════════════════════════════╣\n");
    printf("║HP Bar :[█████████]100%     ║\n");
    printf("║power score :  %-13.0f║\n", power_score);
    printf("╚════════════════════════════╝\n");
    return 0;
}