#include<stdio.h>
int main(){
    int n;
    int largest=0;
    int smallest=0;
    printf("number of elements : ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("enter number %d : ",i+1);
        scanf("%d",&array[i]);
        if(largest<=array[i]){
        largest=array[i];
        }
        if(smallest>=array[i]){
            smallest=array[i];
        }
    }
    printf("largest number is %d\n",largest);
    printf("smallest number is %d\n",smallest);
    return 0;
}