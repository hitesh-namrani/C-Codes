#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    int f=0;
    printf("enter number = ");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i!=0){
            f+=1;
         }
    }
    if(f==num-2){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    getch();
    return 0;
}