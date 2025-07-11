#include <stdio.h>
#include <math.h>
void fibonacci(int n){
    int a=0,b=1,c;
    if(n<1){
        printf("Invalid input\n");
        return;
    }
    printf("Fibonacci series: ");
    for(int i=1; i<=n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    printf("\n");
    return 0;
}