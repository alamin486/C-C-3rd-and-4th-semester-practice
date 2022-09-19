#include<stdio.h>
int main()
{
    char a;
    freopen("Input.txt.txt","r",stdin);

    while(scanf("%c",&a)!=EOF)
    if(a>='A' && a<='Z')
    printf("%c",a+32);
    else

        printf("%c",a);
}
