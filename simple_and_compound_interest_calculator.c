#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float p,r,t,ci,si;
    int a;
    printf("enter 1 for simple interest and 2 for compound interest");
    scanf("%d", &a);
    printf("enter principal = ");
    scanf("%f", &p);
    printf("enter rate = ");
    scanf("%f", &r);
    printf("enter time (in years) = ");
    scanf("%f", &t);
    if(a==1){
        si=p*r*t/100;
        printf("the si is %f",si);
    }
    else if(a==2){
        ci=p*((pow(1+(r/100),t))-1);
        printf("The compound interest is %f",ci);
    }
    else{
        printf("wrong input");
    }
    getch();
    return 0;
}