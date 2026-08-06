#include <stdio.h>
#include <math.h>

int main()
{

    int gold = 1000;
    int selection;
    int total = 0;
    _Bool boughtSword = 0, boughtArmor = 0;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", gold);

    // list of items
    printf("1. Health Potion -  50 Gold (+50 HP)\n");
    printf("2. Mana Potion   -  80 Gold (+30 MP)\n");
    printf("3. Iron Sword    - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Checkout\n");

    printf("\n");
    do
    {
        printf("Select item: ");
        scanf("%d", &selection);
        switch (selection)
        {
        case 1:
            if (total + 50 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 50;
                printf("Added Health Potion to cart\n");
            }
            break;
        case 2:
            if (total + 80 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 80;
                printf("Added Mana Potion to cart\n");
            }
            break;
        case 3:
            if (total + 500 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 500;
                boughtSword = 1;
                printf("Added Iron sword to cart\n");
            }
            break;
        case 4:
            if (total + 300 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 300;
                boughtArmor = 1;
                printf("Added Leather Armor to cart\n");
            }
            break;
        }
    }

    while (selection != 5);
    printf("=== Checkout ===\n");
    if (boughtSword && boughtArmor)
    {
        total = total * 90 / 100; // ลด 10%

        printf("Warrior Bundle! (-10%%)\n");
    }
    printf("\n");

    printf("Total Paid: %d Gold\n", total);
    printf("Remaning: %d Gold\n", gold - total);
    return 0;
}
