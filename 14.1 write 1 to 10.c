#include<stdio.h>
int main()
{
    int i,j;
    freopen("Output.txt","w",stdout);
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)

            printf("%4d",i);
        printf("\n");
    }
}
