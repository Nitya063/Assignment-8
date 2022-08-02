#include<stdio.h>
int main()
{
    int i,j;
    for(i=4;i>=0;i--)
    {
        for(j=8;j>=0;j--)
        {
            if(i==4 || j==4-i || j==4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


