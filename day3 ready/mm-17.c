#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0 && b!=0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a!=0)printf("%d\n",a);
    else printf("%d\n",b);
}
