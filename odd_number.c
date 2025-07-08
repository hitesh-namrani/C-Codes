#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("give n = ");
    scanf("%d",&n);
    for(int i=1;i<=1+(2*n);i+=2){
        printf("%d\n",i);
    }
    int sum = n*(2+(n-1)*2)/2;

    printf("the sum is %d",sum);
    getch();
    return 0;
}