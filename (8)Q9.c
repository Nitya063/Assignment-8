#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=3;i>=0;i--)
    {
        for(j=0;j<3-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i+1;k++)
        {
            printf("%d",k);
        }
        k=k-2;
        for(j=0;j<i;j++)
        {
            printf("%d",k);
            k--;
        }
        for(j=0;j<3-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
