#include<stdio.h>
int main()
{
    int i,n,a[100],inner,outer,temp;
    freopen("Input.txt.txt","r",stdin);
    freopen("Output.txt.txt","w",stdout);

    n=0;
    while(scanf("%d",&a[n])!=EOF)
        n++;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(outer=n-1; outer>=0; outer--)
        for(inner=0; inner<outer; inner++)
        {
            temp=a[inner];
            a[inner]=a[inner+1];
            a[inner+1]=temp;
        }
    for(i=0; i<n; i++)
        printf("%4d",a[i]);
}
