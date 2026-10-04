#include <stdio.h>

int a[10][10], b[10][10], r1, c1, r2, c2;

int enterMatrix ()
{
    int i, j;

    printf("\nEnter rows and column of Matrix A: ");
    scanf("%d" "%d", &r1, &c1);

    printf("Enter Matrix A: ");

    for(i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter rows and column of Matrix B: ");
    scanf("%d" "%d", &r2, &c2);

    printf("Enter Matrix B: ");

    for(i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nMatrices entered successfully.\n");
    return 0;
}

int displayMatrix ()
{
    int i, j;

    printf("\nMatrix A: \n");

    for(i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B: \n");
    for(i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int addition ()
{
    int i, j;
    int sum[10][10];

    if(r1 != r2 || c1 != c2)
    {
        printf("\nAddition is not possible. \n");
    }
    else
    {
        printf("\nAddition Result: \n");

        for(i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%3d", sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

int multiplication ()
{
    int i, j, k;
    int mul[10][10];

    if(c1 != r2)
    {
        printf("\nMultiplication is not possible.\n");
    }
    else
    {
        printf("\nMultiplication Result: \n");

        for(i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for(k = 0; k < c1; k++)
                {
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                }
                printf("%3d", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

int transpose ()
{
    int i, j;

    printf("\nTranspose of Matrix A: \n");

    for(i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("%3d", a[j][i]);
        }
        printf("\n");
    }
    printf("\nTranspose of Matrix B: \n");

    for(i = 0; i < c2; i++)
    {
        for (j = 0; j < r2; j++)
        {
            printf("%3d", b[j][i]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nMatrix Operation: \n");
        printf("1. Enter Matrix \n");
        printf("2. Display Matrix \n");
        printf("3. Addition of Matrix \n");
        printf("4. Multiplication of Matrix \n");
        printf("5. Transpose of Matrix \n");
        printf("6. Exit \n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            enterMatrix();
        }
        else if (choice == 2)
        {
            displayMatrix();
        }
        else if (choice == 3)
        {
            addition();
        }
        else if (choice == 4)
        {
            multiplication();
        }
        else if (choice == 5)
        {
            transpose();
        }
        else if (choice == 6)
        {
            printf("Program end.\n");
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
