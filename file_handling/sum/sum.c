#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sum.txt", "r");
    if(fptr == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    int a, b, sum;
    sum = 0;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    sum = a + b;
    fclose(fptr);
    fptr = fopen("sum.txt", "a");
    if(fptr == NULL){
        printf("Error opening file again!\n");
        return 1;
    }
    fprintf(fptr, "\nSum: %d\n", sum);
    fclose(fptr);
    printf("Sum written to file successfully.\n");
    char c;
    scanf("%c",&c);
    return 0;
}