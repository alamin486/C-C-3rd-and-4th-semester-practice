#include<stdio.h>
int main()
{
    int i,j,r1,c1,r2,c2,a[10][10],b[10][10],c[10][10];
    printf("How many row in 1st Matrix: ");
    scanf("%d",&r1);
    printf("How many column in 1st Matrix: ");
    scanf("%d",&c1);
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d",&a[i][j]);
    printf("How many row in 2nd Matrix: ");
    scanf("%d",&r2);
    printf("How many column in 2nd Matrix: ");
    scanf("%d",&c2);
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            scanf("%d",&b[i][j]);
    if(r1==r2 && c1==c2)
    {
        for(i=0; i<r1; i++)
            for(j=0; j<c1; j++)
                c[i][j]=a[i][j]-b[i][j];
        printf("\n The sub of A & B is: \n");
        for(i=0; i<r1; i++)
        {


            for(j=0; j<c1; j++)
                printf("%4d",c[i][j]);
            printf("\n");
        }
    }

else
    printf("\n The sum of Matrix is impossible.");

}
