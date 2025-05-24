//fibonnaci series
#include<stdio.h>
#include<math.h>
int main(){
    int n,f=0,s=1,p,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d",f);
        p=f+s; //0+1=1 ,2//3
        f=s;//1//1//2
        s=p;//1//2//3
    }  
return 0;
}