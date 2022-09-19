#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10];
    printf("How many row: ");
    scanf("%d",&r);
    printf("How many column: ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
}
