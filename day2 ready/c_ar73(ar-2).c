#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int total[100];
int func(int n){
    total[0]=1;total[1]=1;
    for(int i=2;i<n;i++){
        total[i]=total[i-1]+total[i-2];
    }
}

int main(){
    int i,j,num,n;
    total[0]=1;total[1]=1;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&n);
        func(n);
        for(j=0;j<n;j++){
            if(j==n-1)printf("%d\n",total[j]);
            else printf("%d ",total[j]);
        }
        for(j=0;j<n;j++)total[j]=0;
    }
}