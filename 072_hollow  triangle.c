/**
 * C program to print hollow inverted right triangle or hollow mirrored inverted right triangle star pattern.
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 i,j,rows,columns,type;

    printf("If you want to print hollow inverted right triangle  press (1) or hollow mirrored inverted right triangle press(2): ");
    scanf("%d",&type);

    switch(type)
    {
    case 1:
        printf("Enter number of rows: ");
        scanf("%d",&rows);

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==rows || j==1 || j==i)
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
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==rows || j==1 || j==i)
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
