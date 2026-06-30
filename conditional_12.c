// This program check for eligibility for admission from the given criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140

#include <stdio.h>

int main(void)
{
    int math, phy, chem, total_1, total_2;

    printf("Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140\n");

    printf("Input the marks obtained in Physics : ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &math);

    // Total of Maths, Physics and Chemistry
    total_1 = math + phy + chem;
    printf("Total of Maths, Physics and Chemistry is %d \n", total_1);

    // Total of Maths and Physics
    total_2 = math + phy;
    printf("Total of Maths and Physics is %d \n", total_2);

    if (math >= 65 && phy >= 55 && chem >= 50 && (total_1 >= 190 || total_2 >= 140))
    {
        printf("The candidate is eligible\n");
    }
    else
    {
        printf("The candidate is not eligible\n");
    }
    return 0;
}
