#include<stdio.h>
#include<conio.h>
int main(){
    char a;
    printf("enter character ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='o'||a=='U'){
        printf("The character entered is a vovel.");
    }
    else if (a>='a'&&a<='z'||a>='A'&&a<='Z'){
        printf("The character entered is a consonant.");
    }
    else if (a>='1'&&a<='9'){
        printf("The character entered is a number.");
    }
    else{
        printf("The character entered is a special character.");
    }
    getch();
    return 0;
}