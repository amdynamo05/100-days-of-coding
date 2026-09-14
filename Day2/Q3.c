#include <stdio.h>
int main() {
    int l;
    int b;
    int area,perimeter;
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the breadth: ");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area: %d\n",area);
    printf("Perimeter: %d\n",perimeter);
    return 0;
}