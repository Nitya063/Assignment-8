#include<stdio.h>
int main()
{
    int i,j;
    char x;
    for(i=0;i<=4;i++)
    {
        x='A';
        for(j=0;j<4-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i+1;j++)
        {
            printf("%c",x);
            x++;
        }
        x=x-2;
        for(j=1;j<i+1;j++)
        {
            printf("%c",x);
            x--;
        }
        for(j=0;j<4-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
