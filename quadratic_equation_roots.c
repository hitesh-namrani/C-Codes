#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("ax^2+bx+c\n");
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    printf("enter c = ");
    scanf("%d",&c);
    printf("your equation is %dx^2+%dx+%d\n",a,b,c);
    float d = (-b+((4*a*c)-(b*b))^1/2)/2*a;
    float e = (-b-((4*a*c)-(b*b))^1/2)/2*a;
    if(b*b-4*a*c>=0){
    printf("The roots of quadratic equation are %f and %f",d,e);
    }
    else if(b*b-4*a*c<0){
        printf("this equation has no real roots");
    }
    getch();
    return 0;
}