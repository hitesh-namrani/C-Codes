#include<stdio.h>
#include<conio.h>
int main(){
    int first,second;
    char a;
    printf("give first number = ");
    scanf("%d",&first);
    printf("give operator = ");
    scanf(" %c",&a);
    printf("give second number = ");
    scanf("%d",&second);
    if(a=='+'){
        printf("%d + %d = %d",first,second,first+second);
    }
    else if(a=='-'){
        printf("%d - %d = %d",first,second,first-second);
    }
    else if(a=='*'||a=='x'||a=='X'){
        printf("%d X %d = %d",first,second,first*second);
    }
    else if(a=='/'){
        printf("%d / %d = %f",first,second,first/second);
    }
    else{
        printf("Wrong Operator");
    }
    getch();
    return 0;
}