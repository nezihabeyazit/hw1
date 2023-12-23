#include <stdio.h>

int main()
{   
    int age,salary,credit;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter salary: ");
    scanf("%d", &salary);
    printf("Enter credit: ");
    scanf("%d", &credit);

    if(age<18){
        puts("rejected");
    }
    else if(age<30){
               if(salary>=3*credit){
               puts("approved");
               }
               else{
               puts("rejected");
               }
}
else if(age>=30){
           if(salary>=2*credit){
           puts("approved");
           }
       else{
            puts("rejected");
           }
    }
    return 0;
}
