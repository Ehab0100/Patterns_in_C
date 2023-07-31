#include <stdio.h>

typedef unsigned char u8;

int main()
{
    // i : rows_counter , j: star_counter

    u8 row,i,j;
    printf("Enter number of rows to print star pattern_2: ");
    scanf("%d",&row);

    for(i=row;i>=1;i--)
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
