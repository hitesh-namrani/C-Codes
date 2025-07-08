#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("number of elements : ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("enter number %d : ",i+1);
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("sum of numbers is %d",sum);
    return 0;
}