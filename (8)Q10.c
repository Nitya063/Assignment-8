#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=3;i++)
    {
        k=1;
        for(j=0;j<=(3-i);j++)
        {
            printf("%d",k);
        k++;
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=(3-i);j++)
        {
            k--;
            if(k==4)
                continue;
            printf("%d",k);
        }
        printf("\n");

    }
    return 0;
}
