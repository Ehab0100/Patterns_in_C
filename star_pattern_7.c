#include <stdio.h>

typedef unsigned char u8;

int main()
{
    // i : rows_counter , j: star_counter , k: space_counter

    u8 row,i,j,k;
    printf("Enter number of rows to print star pattern_7: ");
    scanf("%d",&row);

    // upper triangle
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=(row-i);k++)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // lower triangle
    for(i=row-1;i>=1;i--)
    {
        printf(" ");
        for(k=1;k<=(row-i-1);k++)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
