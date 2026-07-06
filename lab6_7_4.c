/*
   This program takes weight and  height as input and returns bmi to the user
*/

#include <stdio.h>

double calculate_bmi(double weight_kg, double height_m);

int main(void)
{
    double weight, height, bmi;

    printf("Enter weight (kg) and height (m): ");
    scanf("%lf %lf", &weight, &height);

    bmi = calculate_bmi(weight, height);

    if (bmi < 18.5 && bmi > 0)
    {
        printf("BMI = %.2lf (Underweight)\n", bmi);
    } else if (bmi >= 18.5 && bmi < 25)
    {
        printf("BMI = %.2lf (Normal)\n", bmi);
    } else if (bmi >= 25 && bmi < 30)
    {
        printf("BMI = %.2lf (Overweight)\n", bmi);
    } else
    {
        printf("BMI = %.2lf (Obese)\n", bmi);
    }

    return 0;
}

double calculate_bmi(double weight_kg, double height_m)
{
    double bmi;
    bmi = weight_kg / (height_m * height_m);

    return bmi;
}

