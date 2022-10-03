#include<stdio.h>
int sumn(int n)
{   int sum=0,x;
    if(n==0)
    return;
    sumn(n-1);
    sum=sum+n;
    printf("%d ",sum);
}
int main()
{
    int n=10;
    printf(" The Square of first %d natural number\n\n",n);
    sumn(n);
    return 0;
}







