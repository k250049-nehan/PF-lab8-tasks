#include <stdio.h>
int main()
{
    int i, j, space;
    printf("\n===Right angled triangle(alligned to the left)===\n\n");
    for (i = 1; i <= 5; i++)
    { // Outer loop for rows
        for (j = 1; j <= i; j++)
        { // Inner loop for columns
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n====Centered Pyramid Pattern====\n\n");
    for (i = 1; i <= 5; i++)
    {
        for (space = 1; space <= 5 - i; space++)
            printf("  "); // spaces before stars

        for (j = 1; j <= (2 * i - 1); j++)
            printf("* ");

        printf("\n");
    }

    printf("\n===Right angled triangle(alligned to the left)===\n\n");
    for (i = 1; i <= 5; i++)
    { // Outer loop for rows
        for (j = 1; j <= i; j++)
        { // Inner loop for columns
            printf("%d  ", i);
        }
        printf("\n");
    }
    return 0;

}
