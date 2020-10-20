#include<stdio.h>
int main()
{
    int x,y,z,min,mid,max;
    scanf("%d %d %d",&x,&y,&z);
    if(x<y && x<z && y<z)
        { min=x; mid=y; max=z; }
    else if(x<y && x<z && z<y){
        min=x; mid=z; max=y;}
    else if(y<x && y<z && x<z){
        min=y; mid=x; max=z;}
    else if(y<x && y<z && z<x){
        min=y; mid=z; max=x;}
    else if(z<x && z<y && y<x){
        min=z; mid=y; max=x;}
    else{
        min=z; mid=x; max=y;}
    int arr1[1000],arr2[1000];
    int k=0,j=0,val;
    for(int i=mid;i>=min;i--)
        arr1[k++]=i;
    for(int i=mid;i<=max;i++)
        arr2[j++]=i;
    if(k<j)
        val=j;
    else
        val=k;
    for(int i=1;i<val;i++)
    {
        if(i<k && i<j)
            printf("%d %d ",arr1[i],arr2[i]);
        else if(i<j)
            printf("%d ",arr2[i]);
        else
            printf("%d ",arr1[i]);
    }

}
