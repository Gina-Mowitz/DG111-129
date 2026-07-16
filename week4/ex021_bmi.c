#include <stdio.h>

int main()

{

    float weight, height, bmi;

    printf("Input Weight (kg): ");

    scanf("%f", &weight);

    printf("Input Height (cm): ");

    scanf("%f", &height);

    bmi = weight / ((height / 100) * (height / 100));

    printf("Output BMI: %.2f", bmi);

    if (bmi < 18.5)

        printf(" → Underweight ✓");

    else if (bmi >= 18.5 && bmi < 24.9)

        printf(" → Normal ✓");

    else if (bmi >= 25 && bmi < 29.9)

        printf(" → Overweight ✓");

    else

        printf(" → Obese ✓");

    return 0;
}