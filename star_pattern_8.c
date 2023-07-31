#include <stdio.h>
typedef unsigned char u8;

int main()
{
    // i = rows_counter , j = star_counter

    u8 row,i,j;
    printf("Enter number of rows to print star pattern_8: ");
    scanf("%d",&row);

    // upper triangle
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // lower triangle
    for(i=row-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
