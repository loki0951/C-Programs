#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0,originalnum=n;
    while(n)
    {
        int num=n%10;
        num=num*num*num;
        rev=rev+num;
        n/=10;
    }
    if(rev==originalnum)
        printf("It's Armstrong number");
    else
        printf("It's not Armstrong number");
}
