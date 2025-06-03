// Write a program to determine whether a student has passed or failed. To pass, a 
// student requires a total of 40% and at least 33% in each subject. Assume there 
// are three subjects and take the marks as input from the user. 

#include <stdio.h>

int main(){
    int marks1,marks2,marks3;
    printf("enter your marks:\n");
    scanf("%d",&marks1);
    printf("enter your marks:\n");
    scanf("%d",&marks2);
    printf("enter your marks:\n");  
    scanf("%d",&marks3);
    printf("the marks are %d , %i and %d\n",marks1,marks2,marks3);
    if(marks1<33 ||marks2<33 ||marks3<33 ){
        printf("You have failed\n");
        printf("Because you have less than 33 marks in individual subject(s) \n");
    }
        else if((marks1+marks2+marks3)/3<40){
            printf("you have failed due to less percentage overall subject(s)\n");
            printf("the least overall marks are 40");

        }
        else{
            printf("You have Passed !");
        }

    return 0;
}