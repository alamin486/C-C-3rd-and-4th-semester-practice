#include<stdio.h>
int main()
{
    freopen("Input.txt","r",stdin);
    int n,value;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("%d Hello file read\n",i);
    }
}
