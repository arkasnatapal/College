#include<stdio.h>
#include<math.h>
int power(int a ,int b){
    if(b==0){
        return 1;
    }
    else if(b>0){
        return a *pow(a,b-1);
    }
    else{
        return 1/pow(a,-b);
    }
}
int main(){
int a,b;
printf("Enter base (A) and exponent (B)\n");
scanf("%d %d",&a,&b);

//print
float res=power(a,b);
printf("%d raise to the power %d is equals to %.2f\n",a,b,res);
return 0;
}