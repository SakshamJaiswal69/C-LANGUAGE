#include <stdio.h>

void good_morning();
void good_afternoon();
void good_night();

void good_morning()
{
    printf("hello good morning\n");
}
void good_afternoon()
{
    printf("hello good afternoon \n");
}
void good_night()
{
    printf("hello good night \n");
}

int main()
{
    good_morning();
    good_afternoon();
    good_night();
    // void display();

    return 0;
}