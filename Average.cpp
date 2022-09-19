#include<stdio.h>
int main()
{
    int i,n,a[100],sum=0;//Here number of student n
    printf("How many numbers of subject: ");//Here user can take marks
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\n");
    printf("Average mark= %f",(float)sum/n);
}
