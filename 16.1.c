#include<stdio.h>
int main()
{
    int i,n,value;
    freopen("Input.txt.txt","r",stdin);
    freopen("Output.txt.txt","w",stdout);


    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&value);


        printf("%d\n",value);
    }
}
