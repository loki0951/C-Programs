#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[1000],str2[1000];
    scanf("%[^\n]",str1);
    int count=0,flag=0;
    str2[count++]=str1[0];
    for(int i=0;i<strlen(str1);i++)
    {
        flag=0;
        for(int j=0;j<count;j++)
        {
            if(str1[i]==str2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            str2[count++]=str1[i];
    }
    printf("%s",str2);
}
