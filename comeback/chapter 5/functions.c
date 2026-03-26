#include <stdio.h>
// funtion prototype
void display() {
    char name[20];
// funtion defination 
    printf("Enter your name: ");
    scanf("%s", name);
    printf("hello %s ", name);
}
int main() {
    display(); // function call
    return 0;
}