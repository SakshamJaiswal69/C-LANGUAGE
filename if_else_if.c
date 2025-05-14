#include<stdio.h>
int main()
{
    int a;
    printf("how many biscutis you want\n");
    scanf("%i",&a);
    if(a<=5){
        printf("ok kiddo, thanks for buying");
    }
    else if(a<=10){
        printf("hey man, thanks for comming by !!!");
    }
    else{
        printf("hey man, are you going for charity ?");
    }
    return 0;
}