#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int main(){
    int a,b,flag=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(a!=0 && b!=0){
        if(a>b){
                a=a%b;
        }else{
            b=b%a;
        }
        printf("a:%d b:%d\n",a,b);
    }
    if(a==0)printf("%d\n",b);
    else printf("%d\n",a);
}
