#include <stdio.h>
int main()
{
    int item_number;
    int gold = 1000;
    float price, remaining_gold;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", gold);

    // list of items
    printf("1. Health Potion -  50 Gold (+50 HP)\n");
    printf("2. Mana Potion   -  80 Gold (+30 MP)\n");
    printf("3. Iron Sword    - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");

    printf("Select item: ");
    scanf("%d", &item_number);

    printf("=== Purchase ===\n");

    // price list
    switch (item_number)
    {
    case 1:
        printf("Health Potion : 50 Gold\n");
        price = 50;
        break;

    case 2:
        printf("Mana Potion : 80 Gold\n");
        price = 80;
        break;

    case 3:
        printf("Iron Sword : 500 Gold\n");
        price = 500;
        break;

    case 4:
        printf("Leather Armor : 300 Gold\n");
        price = 300;
        break;

    case 5:
        printf("Exiting...\n");
        return 0;

    default:
        printf("Invalid input.\n");
        return 1;
    }

    remaining_gold = gold - price;

    printf("Remaining: %.0f Gold\n", remaining_gold);

    if (item_number == 1)
    {
        printf("HP Bonus: +50\n");
    }
    else if (item_number == 2)
    {
        printf("MP Bonus: +30\n");
    }
    else if (item_number == 3)
    {
        printf("ATK Bonus: +20\n");
    }
    else if (item_number == 4)
    {
        printf("DEF Bonus: +15\n");
    }
    printf("\n");
    printf("Item purchased successfully! ✓ \n");

    return 0;
}