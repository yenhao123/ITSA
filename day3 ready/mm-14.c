#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in �ƾ�1 mm14
int main(){
    int num,days,hours,mins,sec;
    scanf("%d",&num);
    days=num/86400;num=num%86400;
    hours=num/3600;num=num%3600;
    mins=num/60;sec=num%60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",days,hours,mins,sec);
}