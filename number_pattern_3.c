#include <stdio.h>

typedef unsigned char u8;

int main()
{
    // i : rows_counter , j: elements_counter

    u8 row,i,j,counter=0;
    printf("Enter number of rows to print number pattern_3: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            counter++;
            //%-3d: every number has 3_bit field
            printf("%-3d",counter);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
