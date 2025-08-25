/*
1
23
456
78910*/
#include<stdio.h>
#include<math.h>
int main(){
int n;
scanf("%d",&n);
int p=1;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("%d ",p);
        p++;
    }
    printf("\n");
}
return 0;
}