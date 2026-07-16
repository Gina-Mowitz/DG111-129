#include <stdio.h>
#include <math.h>
int main()
{
    int Player_Attack, Enemy_Defense, Hit_Number, Damage, enemy_hp;

    Player_Attack = 0;
    Enemy_Defense = 0;
    Hit_Number = 0;
    Damage = 0;
    enemy_hp = 500;

    printf("=== COMBAT SIMULATOR ===\n");

    printf("Player Attack : ");
    scanf("%d", &Player_Attack);
    printf("Enemy Defense : ");
    scanf("%d", &Enemy_Defense);
    printf("Hit Number    : ");
    scanf("%d", &Hit_Number);

    Damage = (Player_Attack - Enemy_Defense);

    int critical_damage = (int)ceil((float)Damage * 1.5f);

    if (Hit_Number % 5 == 0)
    {
        printf("Damage = %d *** Critical Hit! x1.5***\n", critical_damage);
        printf("Enemy HP = %d\n", enemy_hp - critical_damage);
    }
    else
    {
        printf("Damage = %d (Normal)\n", Damage);
        printf("Enemy HP = %d\n", enemy_hp - Damage);
    }

    return 0;
}