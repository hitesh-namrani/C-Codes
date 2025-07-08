#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    int n;
    printf("give number = ");
    scanf("%d",&num);
    printf("print table till = ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
    getch();
    return 0;    
}