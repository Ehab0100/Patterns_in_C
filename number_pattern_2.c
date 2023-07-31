#include <stdio.h>

typedef unsigned char u8;

int main()
{
    // i : rows_counter , j: number_counter

    u8 row,i,j;
    printf("Enter number of rows to print number pattern_2: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
