//pattern
#include<stdio.h>
#include<math.h>
int main(){
int i,j,n;
printf("enter n \n");
scanf("%d",&n);
char ch='Z';
for(i=0;i<n;i++){
    char ch2=ch;
    //for spaces
    for(j=0;j<=i;j++){
        printf(" ");
    }
    //for chars
    for(j=1;j<=n-i;j++){
        printf("%c",ch2);
        ch2-=2;
    }
    ch-=2;
    printf("\n");
}
return 0;
}