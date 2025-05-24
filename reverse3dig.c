#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
printf("enter a 3 dig number \n");
scanf("%d",&n);
int m=n;
for(;m!=0;m/=10){
    int ld=m%10;
    sum=(sum*10)+ld;
}
printf(" the reverse is %d",sum);
return 0;
}