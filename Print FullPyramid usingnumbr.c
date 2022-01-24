#include<stdio.h>
#include<conio.h>
int main()
{
    int i, space, rownum, k=0;
    printf("Enter the number of rows : ");
    scanf("%d", &rownum);
    for(i=1; i<=rownum; i++)
    {
        for(space=1; space<=(rownum-i); space++)
            printf("  ");
        while(k!=(2*i-1))
        {
            printf("* ");
            k++;
        }
        k=0;
        printf("\n");
    }
    getch();
    return 0;
}