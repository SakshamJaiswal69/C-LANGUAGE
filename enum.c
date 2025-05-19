#include <stdio.h>
enum weekdays{Sunday=15,Monday,Tuesday,Wednesday =40,Thursday,Friday,Saturday};
int main(){
    enum weekdays g;
    g = Thursday;
    printf("the value of Tuesday are %d",g);

    return 0;
}