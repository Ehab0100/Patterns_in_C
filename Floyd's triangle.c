/**
 * C program to print Floyd's triangle
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 i,j,rows,counter=0;
    printf("Enter the number of rows of Floyd's triangle to print:");
    scanf("%d",&rows);

    // for loop to print spaces
    for(i=1;i<=rows;i++)
    {
        // for loop to print numbers
        for(j=1;j<i;j++)
        {
            counter++;
            printf("%3d",counter);
        }
        printf("\n");
    }


    return 0;
}
