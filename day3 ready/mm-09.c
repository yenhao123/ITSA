#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm-09

//算2的n次方 大於31不用算 記得開long long
long long func(int num){
    long long total=2;
    if(num>31)return FALSE;
    else if(num==0)total=1;
    else{
        for(int i=2;i<=num;i++){
            total=2*total;
        }
    }return total;
}

int main(){
    int num;
    long long total;
    while(scanf("%d",&num)!=EOF){
        total=0;
        total=func(num);
        if(total!=0)printf("%ld\n",total);
        else printf("Value of more than 31\n");
    }
}