#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int main(){
    float num;
    while(scanf("%f",&num)!=EOF){
        printf("%.1f\n",num*9/5+32);
    }
}
