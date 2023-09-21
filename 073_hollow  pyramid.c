/**
 * C program to print hollow pyramid (Equilateral triangle) or inverted star pattern.
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 i,j,rows,columns,type;

    printf("If you want to print hollow pyramid star pattern press(1) or inverted  press(2):");
    scanf("%d",&type);

    switch(type)
    {
    case 1:
        printf("Enter number of rows: ");
        scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i)-1;j++)
        {
            if(i==1 || i==rows || j==1 || j==(2*i)-1 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    break;

    case 2:
        printf("Enter number of rows: ");
        scanf("%d",&rows);

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i)-1;j++)
        {
            if(i==1 || i==rows || j==1 || j==(2*i)-1 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    }


    return 0;
}
