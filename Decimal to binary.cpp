#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100];
    long num;
    printf("Enter any decimal number: ");
    scanf("%ld",&num);

     n=0;
     while(num>0)
     {
         a[n]=num%2;
         num=num/2;
         n++;
     }
         printf("\n Equivalent binary number is: \n");
    for(i=n-1; i>=n; i--)
        printf("%d",a[i]);
}

