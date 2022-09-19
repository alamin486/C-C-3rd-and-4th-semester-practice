#include<stdio.h>
int main()
{
    int i,n,a[100],outer,inner,temp;
    printf("how many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        for(outer=n-1;outer>0;outer--)
            for(inner=0;inner<outer;inner++)
            if(a[inner]<a[inner+1])
        {
            temp=a[inner];
            a[inner]=a[inner+1];
            a[inner+1]=temp;
        }
         printf("\nAfter sorting the array contains: \n");
    for(i=0; i<n; i++)
        printf("%4d",a[i]);
        if(n%2==1)
            printf("\nMedium= %d",a[n/2]);
        else
            printf("\nMedium= %d & %d",a[n/2-1],a[n/2]);
}



