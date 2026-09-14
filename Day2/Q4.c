#include <stdio.h>
int main() {
    int r;
    float pie=3.14;
    float area,circumference;
    printf("Enter the Radius: ");
    scanf("%d",&r);
    circumference=2*pie*r;
    area=pie*r*r;
    printf("Area of Circle: %f\n",area);
    printf("Circumference of Circle: %f\n",circumference);
    return 0;
}