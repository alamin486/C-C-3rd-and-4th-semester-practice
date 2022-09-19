#include<stdio.h>
int main()
{
    int i,n;
    long a[100];
    printf("How many numbers: ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<0;i++)
        printf("%101d",a[i]);
}
