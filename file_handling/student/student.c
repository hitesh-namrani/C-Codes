#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    if(fptr == NULL){
        printf("Error opening file!");
        return 1;
    }
    struct student{
        char name[50];
        int age;
        float cgpa;
    }s1;
    struct stud{
        char name[50];
        int age;
        float cgpa;
    }s2;
    printf("Enter name of student 1: ");
    gets(s1.name);
    printf("Enter age of student 1: "); 
    scanf("%d", &s1.age);
    printf("Enter CGPA of student 1: ");
    scanf("%f", &s1.cgpa);
    printf("Enter name of student 2: ");
    scanf("%s", s2.name);
    printf("Enter age of student 2: ");
    scanf("%d", &s2.age);
    printf("Enter CGPA of student 2: ");
    scanf("%f", &s2.cgpa);
    fprintf(fptr, "Name: %s\n", s1.name);
    fprintf(fptr, "Age: %d\n", s1.age);
    fprintf(fptr, "CGPA: %.2f\n", s1.cgpa);
    fprintf(fptr, "Name: %s\n", s2.name);
    fprintf(fptr, "Age: %d\n", s2.age);
    fprintf(fptr, "CGPA: %.2f\n", s2.cgpa);
    fclose(fptr);
    getch();
    return 0;
}