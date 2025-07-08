#include <stdio.h>
#include <conio.h>
int main(){
    int a,b;
    printf("1st integer = ");
    scanf("%d",&a);
    printf("2nd integer = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("1st integer = %d\n2nd integer = %d",a,b);
    getch();
    return 0;
}