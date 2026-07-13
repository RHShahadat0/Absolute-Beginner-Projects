#include <stdio.h>
#include <math.h>

double calculate_bmi(double weight_kg, double height_m);

int main(void)
{
    double weight, height, bmi;

    printf("Enter weight: ");
    scanf("%lf", &weight);

    printf("Enter height: ");
    scanf("%lf", &height);

    bmi = calculate_bmi(weight, height);

    if (bmi < 18.5)
    {
        printf("BMI = %.2lf (Underweight)\n", bmi);
    } else if (bmi < 25)
    {
        printf("BMI = %.2lf (Normal)\n", bmi);
    } else if (bmi < 30)
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
    bmi = weight_kg / pow(height_m, 2);

    return bmi;
}

