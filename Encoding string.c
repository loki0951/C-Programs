#include<stdio.h>
#include<string.h>
#include<math.h>
//hhjhjjhhhhhhh
//output : h2j1h1j2h7
int main(){
    char arr[1000];
    scanf("%s",arr);
    char alpha[1000];
    int num[1000];
    int front=-1,rear=-1;
    int len=strlen(arr);
    alpha[++rear]=arr[0];
    num[rear]=1;
    for(int i=1;i<len;i++){
        if(arr[i]==alpha[rear]){
            num[rear]++;
        }
        else{
            alpha[++rear]=arr[i];
            num[rear]=1;
        }
    }
    while(front!=rear){
        ++front;
        printf("%c%d",alpha[front],num[front]);
    }
}
