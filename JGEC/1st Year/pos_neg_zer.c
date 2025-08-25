#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("Enter a number \n");
scanf("%d",&n);
(n==0)?printf("Zero"):(n>0)?printf("Positive"):printf("Negative");
return 0;
}