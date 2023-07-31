#include <stdio.h>

typedef unsigned char u8;

int main()
{
    // i : rows_counter , j: star_space_counter

    u8 row,i,j,k;
    printf("Enter number of rows to print star pattern_3: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(i+j<=row)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
