#include<stdio.h>
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
    return 0;
}
int main(){
    int a,b;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}