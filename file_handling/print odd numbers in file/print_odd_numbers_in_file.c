#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("odd_numbers.txt", "w");
    int i;
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("give n:\n");
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);
    return 0;
}