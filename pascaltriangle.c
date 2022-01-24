#include<stdio.h>
#include<conio.h>
long int fact(int);
int main()
{
    int i, c, rowLimit;
    printf("Enter the Number of Rows: ");
    scanf("%d", &rowLimit);
    for(i=0; i<rowLimit; i++)
    {
        for(c=(rowLimit-1); c>i; c--)
            printf(" ");
        for(c=0; c<=i; c++)
            printf("%ld ", fact(i)/(fact(c)*fact(i-c)));
        printf("\n");
    }
    getch();
    return 0;
}
long int fact(int n)
{
    int i, res=1;
    for(i=1; i<=n; i++)
        res = res*i;
    return res;
}