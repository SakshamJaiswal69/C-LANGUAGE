#include <stdio.h>

    union emp {
    int a;
    char b;
    float c;
    double d;
};
int main()
{
printf("%d",sizeof(union emp));
}
 
    
    
