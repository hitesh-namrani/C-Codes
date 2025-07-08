#include<stdio.h>
int main (){
    int celsius;
    printf("degree celsius = ");
    scanf("%d", &celsius);
    float faherenheit=(celsius*9/5)+32;
    printf("%ddegree celcius is %f degree faherenheit", celsius, faherenheit);
    return 0; 
}