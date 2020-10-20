#include<stdio.h>
int Selectionsort(int a[],int size);
int main()
{
    int n=10,arr[1000];//64 45 12 10 56 78 99 55 1 2 0
    for(int i=1;i<=n;i++)
        scanf("%d ",&arr[i]);
    Selectionsort(arr,n);
    for(int i=1;i<=n;i++)
        printf("%d ",arr[i]);
    return 0;
}
int Selectionsort(int a[],int size)
{
    for(int i=1;i<=size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}
