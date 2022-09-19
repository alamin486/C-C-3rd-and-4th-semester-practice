#include<stdio.h>
int main()
{
    int i,n,a[100];
    freopen("Inpuiit.txt.txt","r",stdin);
    freopen("Outpuiit.txt.txt","w",stdout);

    printf("how many number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
        printf("%4d",a[i]);
}

