#include<stdio.h>
int main()
{
    char ch;
    int a[256],i;
    for(i=0; i<256; i++)
        a[i]=0;
    freopen("Input.txt.txt","r",stdin);

    while(scanf("%c",&ch)!=EOF)
        a[ch]++;
    for(i=32; i<256; i++)
        if(a[i]>0)
            printf("%c=  %d\t",i,a[i]);

}

