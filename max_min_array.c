#include<stdio.h>
#include<math.h>
void large(int n,int arr[n]){
    int large =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("largest is %d\n",large);
}
void small(int n,int arr[n]){
    int small =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("smallest is %d\n",small);
}
int main(){
int n;
printf("enter the total number of elements\n");
scanf(" %d",&n);
int arr[n];
printf("enter the elements : \n");
for(int i=0;i<n;i++){
    scanf(" %d",&arr[i]);
}
large(n,arr);
small(n,arr);
return 0;
}