#include <stdio.h>
#include <stdbool.h>
int main()
{
    int max_hp;
    int damage;
    int temp_poisoned;
    bool is_poisoned;
    int attack_count;

    printf("Max HP : ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage);

    printf("Poisoned: ");
    scanf("%d", &temp_poisoned);

    is_poisoned = temp_poisoned;

    printf("Attack Count: ");
    scanf("%d", &attack_count);

    int hp = max_hp - damage;
    if (hp < 0)
        hp = 0;
    float perhp = (float)hp / max_hp;
    ///
    if (hp <= 0)
    {
        printf("Dead");
    }
    else if (perhp < 0.25)
    {
        printf("Critical");
    }
    else if (is_poisoned == 1)
    {
        printf("Poisoned");
    }
    else
    {
        printf("Normal");
    }

    ////

    return 0;
}