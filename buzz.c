#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int ld=n%10;
    if(n%7==0||ld==7){
        printf("Buzz num");
    }
    else{
        printf("Not Buzz");
    }
return 0;
}