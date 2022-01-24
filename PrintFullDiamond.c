#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, row, space;
    printf("Enter Number of Rows: ");
    scanf("%d", &row);
    space = row-1;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        space--;
        for(j=1; j<=(2*i-1); j++)
            printf("*");
        printf("\n");
    }
    space = 1;
    for(i=1; i<=(row-1); i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        space++;
        for(j=1; j<=(2*(row-i)-1); j++)
            printf("*");
        printf("\n");
    }
    getch();
    return 0;
}
