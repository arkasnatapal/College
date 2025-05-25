#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("Enter n");
scanf("%d ",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int s=0;
for(int i=0; i<n;i++){
    if(arr[i]%2!=0){
        s+=arr[i];
    }
}
printf("Sum is %d",s);
return 0;
}