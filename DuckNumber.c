#include<stdio.h>
int main()
{
    int n,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        if(rem==0)
            break;
        n/=10;
    }
    if(n==0)//if a number consists zero then its called duck number
        printf("Non Duck number");
    else
        printf("Duck number");
}
