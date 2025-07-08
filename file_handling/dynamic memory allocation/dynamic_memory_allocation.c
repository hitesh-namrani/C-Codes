#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    else
    {
        printf("Memory allocation successful\n");
        for(int i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &ptr[i]);
        }
        FILE *fp = fopen("data.txt", "w");
        if(fp == NULL)
        {
            printf("File opening failed\n");
            free(ptr);
            return 1;
        }
        for(int i = 0; i < n; i++)
        {
            fprintf(fp, "%d\n", ptr[i]);
        }
        free(ptr);
    }
    getchar();
    return 0;}