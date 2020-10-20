#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("1\n");
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            if(j==1 || j==i+1)
                printf("%d",i);
            else
                printf("0");
        }printf("\n");
    }
}
