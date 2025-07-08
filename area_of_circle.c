#include <stdio.h>

int main()
{
    int radius;
    printf("Enter radius");
    scanf("%d", &radius);
    float area=3.14*radius*radius;
    printf("the area of circle is :%.2f",area);
    printf("sq units");
    return 0;
}