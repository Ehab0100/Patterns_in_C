/**
 * C program to print rhombus or parallelogram star pattern.
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 i,j,rows,columns,type;

    printf("If you want print parallelogram press(1) or rhombus  press(2): ");
    scanf("%d",&type);

    switch(type)
    {
    case 1:
        printf("Enter the length of the parallelogram:");
        scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=rows;j++)
        {
            printf("*");
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
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=columns;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    }


    return 0;
}
