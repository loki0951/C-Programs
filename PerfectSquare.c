#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqrtN;
    scanf("%d",&n);
    sqrtN = sqrt(n);
    if((sqrtN*sqrtN)==n)
        printf("Perfect Square");
    else
        printf("Not a Perefct Square");
}
