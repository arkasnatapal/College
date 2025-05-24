#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
printf("enter the number of elements");
scanf("%d",&n);
int *arr=(int *)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d \t", arr[i]);
}
return 0;
}