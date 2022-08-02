#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=0;i<=6;i++)
    {
        k='A';
        for(j=0;j<=6-i;j++)
        {
            printf("%c",k);
            k++;
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=6-i;j++)
        {
            k--;
            if(k=='G')
                continue;
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}
