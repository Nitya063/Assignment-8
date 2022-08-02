#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i>=0;i--)
    {
        for(j=0;j<=18;j++)
        {
            if(j<i || (9-i)<=j && j<=(9+i) || j>18-i)
            {

                printf(" ");
            }
            else
            {


                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<=9;i++)
    {
        for(j=0;j<i;j++)
        {
           printf(" ");
        }
        for(j=0;j<9-i;j++)
        {
                if(i==0 && j==6)
                {
                    printf("MySirG");
                    break;
                }
            printf("*");
        }
        for(j=0;j<=9-i;j++)
        {
            if(i==0 && j<3)
                continue;
            printf("*");
        }
        for(j=0;j<i-1;j++)
        {
            printf(" ");
        }
        printf("\n");

    }
    return 0;

}
