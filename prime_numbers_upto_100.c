#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    for (a=2;a<=100;a++){
        int isprime=1;
        for(b=2;b*b<=a;b++){
          if(a%b==0){
            isprime=0;
            break;
          }          
        }
        if(isprime==1){
            printf("%d\n",a);
        }
        else if(isprime==0){
            continue;
        }        
    }
    getch();
    return 0;
}