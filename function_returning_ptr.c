#include<stdio.h>
int returnptr(int a){
    int *ptr = &a;
    return *ptr;
}
int main(){
    int a = 10;
    printf("%d",returnptr(a));
    return 0;
}