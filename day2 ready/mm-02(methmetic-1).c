#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%f\n",(float)a*b/2);
    }
}
