#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number %d is even",a);
    }
    else{
        printf("The number %d is odd",a);
    }
    getch();
    return 0;
}