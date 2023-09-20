/**
 * C program to print hollow square or rectangle star(*) pattern series using for loop.
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 i,j,rows,columns,type;

    printf("If you want print square press(1) or rectangle  press(2): ");
     scanf("%d",&type);

    switch(type)
    {
    case 1:
        printf("Enter the length of the square:");
        scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    break;

    case 2:
        printf("Enter the width of the rectangle:");
        scanf("%d",&rows);
        printf("Enter the length of the rectangle:");
        scanf("%d",&columns);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=columns;j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    }


    return 0;
}
