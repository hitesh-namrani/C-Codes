#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("number of terms of fibonacci series :");
    scanf("%d",&n);
    int term[n];
    term[0]=0;
    term[1]=1;
    for (int i=2; i<n;i++){
        term[i]=term[i-1]+term[i-2];
    }
    for(int j=0;j<n;j++){
        printf("term %d = %d\n",j+1,term[j]);
    }
    getch();
    return 0;
}
