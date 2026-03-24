#include <stdio.h>

int main() {
    int length,breadth ,area;
    printf("Enter the length for the rectangle :");
    scanf("%d", &length);
    printf("Enter the breadth for the rectangle :");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of the rectangle is : %d",area);


    return 0;
}