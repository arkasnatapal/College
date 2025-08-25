#include<stdio.h>
#include<math.h>
int fact(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
    }
    return p;
}
int main(){
int n;
scanf("%d",&n);
int sum=0;
for(int i=0;i<=n;i++){
sum+=fact(i);
}
printf("the sum is %d",sum);
return 0;
}