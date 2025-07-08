#include<stdio.h>
#include<conio.h>
int main(){
    int choose;
    printf("enter\n1 for circle\n2 for square\n3 for rectangle\n4 for parallelogram\n5 for triangle\nenter here =");
    scanf("%d",&choose);
    if(choose==1){
        float r;
        printf("enter radius = ");
        scanf("%f",&r);
        printf("area of circle is %f square units",r*r*22/7);
    }
    else if(choose==2){
        printf("length of side = ");
        float side;
        scanf("%f",&side);
        printf("area of square is %f square units",side*side);
    }
    else if(choose==3){
        float length,breadth;
        printf("enter length = ");
        scanf("%f",&length);
        printf("enter breadth = ");
        scanf("%f",&breadth);
        printf("area of rectangle is %f square units",length*breadth);
    }
    else if(choose==4){
        float b,h;
        printf("length of base = ");
        scanf("%f",&b);
        printf("length of height = ");
        scanf("%f",&h);
        printf("area of parallelogram is %f square units",b*h);
    }
    else if (choose==5){
        float base,height;
        printf("length of base = ");
        scanf("%f",&base);
        printf("length of height = ");
        scanf("%f",&height);
        printf("area of triangle is %f square units",base*height/2);
    }
    else{
        printf("wrong input");
    }
    getch();
    return 0;
}