#include<stdio.h>

int binary_search(int A[],int n,int x)
{
    int A[6]={1,2,3,4,5,6};
    int n= 6;
    printf("How many number: ");
    scanf("%d",&n);
    int left,right,mid;
    left=0;
    right=n-1;
    while(left<=right)
        mid=(left+right)/2;
    if(A[mid]==x)
    {
        return mid;
    }
    if(A[mid]<x)
    {
        left=mid+1;
    }
    else
    {
        right=mid-1;
    }
    return -1;
}
