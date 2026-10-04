#include<stdio.h>

int main()
{
    int choice;
    float a, b, c;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("\nEnter second number: ");
    scanf("%f", &b);

    printf("\nChoose Arithmatic Operation: \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        c = a + b;
        printf("Addition Result = %.2f", c);
        break;
    case 2:
        c = a - b;
        printf("Subtraction Result = %.2f", c);
        break;
    case 3:
        c = a * b;
        printf("Multiplication Result = %2.f", c);
        break;
    case 4:
        if(b != 0 )
        {
            c = a / b;
            printf("Division Result = %.2f", c);
        }
        else
        {
            printf("Error! Division by ZERO.\n");
        }
        break;
    default:
        printf("Choice Invalid.");
    }
    return 0;
}
