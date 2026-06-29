#include <stdio.h>
//Trying out ternary operators first time
int main(void)
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult \n") : printf("Not Adult");

    return 0;
}
