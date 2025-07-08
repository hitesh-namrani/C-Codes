#include<stdio.h>
#include<conio.h>
int main(){
    int asc;
    char ch;
    int a;
    printf("enter 1 to convert ascii to char and 2 to convert char to ascii");
    scanf("%d",&a);
    getchar();
    if(a==1){
        printf("enter ascii value");
        scanf("%d",&asc);
        printf("The character for ascii value %d is %c",asc,asc);
    }
    else if (a==2){
        printf("enter char ");
        scanf("%c",&ch);
        printf("The ascii value for character %c is %d",ch,ch);
    }
    else {
        printf("wrong input");
    }
    getch();
    return 0;
}