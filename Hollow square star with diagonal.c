/**
 *  C program to print hollow square star pattern with diagonal using loops
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 i,j,rows;

    printf("Enter the length of the square:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(i==1 || i==rows || j==1 || j==rows || i==j || j==(rows-i+1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
