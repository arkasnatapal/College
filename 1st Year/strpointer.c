// using Structure Pointer

#include<stdio.h>
typedef struct student{
    int roll;
    int class;
}stud;
int main(){
    stud s1;
    stud *ptr;
    ptr =&s1;
    printf("enter the roll");
    scanf("%d",&ptr->roll);
    printf("enter the class");
    scanf("%d",&ptr->class);
    printf("roll = %d\n",ptr->roll);
    printf("class =%d\n",ptr->class);
    return 0;
}
