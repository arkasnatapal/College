#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter the year \n");
scanf("%d",&n);
if(n%100==0){
    if(n%400==0){
        printf("Leap year");
    }
    else{
        printf("Not leap year");
    }
}
else if(n%4==0){
    printf("Leap Year");
}
else{
    printf("Not Leap Year");
}

return 0;
}