#include<stdio.h>
int main()
{
    int num,val,power=0;
    scanf("%d %d",&num,&val);
    int n=val;
    while(n)
    {
        int rem=n%10;
        power++;
        n/=10;
    }
    for(int i=num;i<=val;i++)
    printf("%0.*d ",power,i);
}
