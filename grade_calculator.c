#include<stdio.h>
#include<conio.h>
int main(){
    int marks1,marks2,marks3;
    float avg;
    char grade;
    printf("enter marks of 1st subject\t");
    scanf("%d",&marks1);
    printf("enter marks of 2nd subject\t");
    scanf("%d",&marks2);
    printf("enter marks of 3rd subject\t");
    scanf("%d",&marks3);
    avg=(marks1+marks2+marks3)/3;
    if(avg>=90){
        grade='S';
        printf("your grade is %c",grade);
    }
    else if(avg>=80){
        grade='A';
        printf("your grade is %c",grade);
    }
    else if (avg>=70)
    {
        grade='B';
        printf("your grade is %c",grade);
    }
    else if (avg>=60)
    {
        grade='C';
        printf("your grade is %c",grade);
    }
    else if (avg>=50)
    {
        grade='D';
        printf("your grade is %c",grade);
    }
    else{
        grade='F';
        printf("your grade is %c",grade);
    }  
    getch();
    return 0;
}
