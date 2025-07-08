#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("enter 1st integer = ");
    scanf("%d",&a);
    printf("enter 2nd integer = ");
    scanf("%d",&b);
    printf("enter 3rd integer = ");
    scanf("%d",&c);
    if(a>b){
        (a>c? printf("%d is greatest",a): printf("%d is greatest",c));
    }
    else{
        (b>c? printf("%d is greatest",b): printf("%d is greatest",c));
    }
    getch();
    return 0;
}