#include<stdio.h>
int main()
{
    char ch;
    int lower=0,upper=0,digit=0,space=0,other=0,line=1;
    freopen("Input.txt.txt","r",stdin);
    while(scanf("%c",&ch)!=EOF)
        if (ch>='a' &&  ch<='z')
            lower++;
        else if (ch>='A' &&  ch<='Z')
            upper++;
        else if (ch>='0' &&  ch<='9')
            digit++;
        else if (ch=='\n')
            line++;
        else if(ch==' ')
            space++;
        else
            other++;
    printf("lower= %d\n",lower);
    printf("upper= %d\n",upper);
    printf("digit= %d\n",digit);
    printf("space= %d\n",space);
    printf("line= %d\n",line);
    printf("other= %d\n",other);
}
