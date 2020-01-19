#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in ¼Æ¾Ç1 mm-21
int main(){
    int i,num;
    long long total=1;
    while(scanf("%d",&num)!=EOF){
        total=1;
        for(i=1;i<=num;i++){
            total=total*i;
        }
        printf("%lld\n",total);
    }
}
