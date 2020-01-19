#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int main(){
    int num,total=0;
    while(scanf("%d",&num)!=EOF){
        total=0;
        for(int i=1;i<=num;i++){
            if(i%3==0)total+=i;
        }
        printf("%d\n",total);
    }
}
