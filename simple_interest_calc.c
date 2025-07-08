#include<stdio.h>
int main(){
    float rate,amount;
    int principle,time;
    printf("principle = ");
    scanf("%d", &principle);
    printf("intrest rate (percent) = ");
    scanf("%f", &rate);
    printf("time(in years) = ");
    scanf("%d", &time);
    amount=principle*(1+(rate*time/100));
    printf("your investment of %d at %f interest rate is %f after %d years",principle,rate,amount,time);
    return 0;
}