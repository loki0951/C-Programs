#include<stdio.h>
int main()
{
    int n,sum;
    int flag=0;
    scanf("%d",&n);
    int arr[n],k=0;
    int original = n;
    while(n)
    {
        int rem=n%10;
        arr[k++]=rem;
        n/=10;
    }
    while(sum<original)
    {
        sum=0;
        for(int i=0;i<k;i++)
            sum=sum+arr[i];
        printf("%d ",sum);
        if(sum!=original)
        {
            for(int j=k-1;j>=0;j--)
                arr[j]=arr[j-1];
            arr[0]=sum;
        }
        else
            flag=1;
    }
    if(flag==1)
        printf("KEITH number");
    else
        printf("NOT KEITH number");
}
