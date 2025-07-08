#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    int factorial=1;
    printf("give number whose factorial is required ");
    scanf("%d",&num);
    for(int i=num;i>=1;i-=1){
        factorial*=i;
    }
    printf("factorial of %d is %d",num,factorial);
    getch();
    return 0;
}