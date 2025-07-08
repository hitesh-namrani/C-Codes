#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,res,opt;
    printf("Enter Value of a\t");
    scanf("%d",&a);
    printf("Enter Value of b\t");
    scanf("%d",&b);
    printf("enter the option(1..3)\t");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        res=a+b;
        printf("%d+%d=%d",a,b,res);
        break;
    case 2:
        res=a-b;
        printf("%d-%d=%d",a,b,res);
        break;
    case 3:
        res=a*b;
        printf("%d*%d=%d",a,b,res);
        break;
    
    default:
        printf("invalid input");
    }
    getch();
    return 0;
}