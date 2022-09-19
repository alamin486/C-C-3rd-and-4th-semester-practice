#include <stdio.h>
int main()
{
 int i;
 char str[50];
 printf("Enter your name: ");
 scanf("%s",str);
 for (i=1;i<=10000;i++)
 {
 printf("%s\t",str);
 }
 return 0;
}
