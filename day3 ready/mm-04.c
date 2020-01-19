#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in ¼Æ¾Ç1 mm-04

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(a%b>=0)printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
    else{
        printf("%d/%d=%d...%d\n",a,b,a/b-1,a%b+b);
    }

}
