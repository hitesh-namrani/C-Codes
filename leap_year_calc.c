#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("enter year = ");
    scanf("%d",&year);
    if (year%100==0){
        printf("%d is not a leap year",year);
    }
    else if(year%4==0){
        printf("%d is a leap year",year);
    }
    else {
        printf("%d is not a leap year",year);
    }
    getch();
    return 0;
}