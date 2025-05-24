#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter the no of elements in arr\n");
scanf("%d",&n);
int arr1[n];
int arr2[n];
printf("enter elements of arr1\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
}
printf("enter elements of arr2\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
}
int arr3[n];
for(int i=0 ;i<n;i++){
    arr3[i]=arr1[i]+arr2[i];
}
printf("The resultant array is : \n");
for(int i=0;i<n;i++){
    printf("%d \t",arr3[i]);
}
return 0;
}