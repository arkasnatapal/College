//linear search technique
#include<stdio.h>
int linear(int n,int arr[n],int p){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==p){
            return i;
        }
    }
           return -1;
}
int main(){
    int n;
    printf("enter the n\n");
    scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter the element to search\n");
int p;
scanf("%d",&p);
int result=linear(n,arr,p);
if(result==-1){
    printf("Not present");
}
else{
    printf("present");
}
return 0;
}