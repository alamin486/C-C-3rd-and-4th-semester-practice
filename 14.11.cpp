#include<stdio.h>
#include<conio.h>
int main()
{

    int n;
    FILE*fp;
    fp=fopen("Cse.txt","w");

    for(i=1; i<=10; i++)
        fprintf(fp,"%4d",i);

}
