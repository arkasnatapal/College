#include<stdio.h>
#include<math.h>
void bubble(int n, int arr[n]){
    for(int i =0;i<n-1;i++){
        int didswap=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
          break;
        }
    }
}
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
bubble(n,arr);
 printf("after bubble sorting \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
return 0;
}
