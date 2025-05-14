#include <stdio.h>
#include <string.h>
/*
// Structure in C
    struct employee{
        
        int id;
        char name[50];

}e1;// structure variable declaration
int main()
{
    e1.id=101;
    strcpy(e1.name,"saksham Jaiswal");
    printf("employee id : %d\n",e1.id);
    printf("employee name : %s\n",e1.name);
    return 0;
}
*/
struct employee {
    int id;
    char name[50];
    float salary;
}e1,e2;// structure variable declaration
int main()
{
    e1.id = 101;
    strcpy(e1.name,"saksham Jaiswal");
    e1.salary = 56000;

    e2.id = 102;
    strcpy(e2.name,"ayush jaiswal");
    e2.salary = 60000;
    // printing the values of employees.
    printf(" First employee id : %i\n",e1.id);
    printf(" first employee name : %s\n",e1.name);
    printf(" First employee salary %f\n",e1.salary);
    printf("\n");
    printf("Second employee id : 5d\n",e2.id);
    printf("second employee name : %s\n",e2.name);;
    printf("Second employee name : %f\n",e2.salary);
    printf("\n");
    printf("Size of structure : %d\n",sizeof(e1));
    printf("Size of structure : %d\n",sizeof(e2));
}
