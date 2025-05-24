//pattern menu driven
#include<stdio.h>
int main(){
int n,i,j,p,s;
printf("choice pls : 1 or 2");
scanf("%d",&n);
switch(n){
    case 1:
    s=1;
    printf("enter the num");
    scanf("%d",&p);
    for(i=0;i<p;i++){
        for(j=0;j<=i;j++){
            printf("%d",s);
            s++;
        }
        printf("\n");
    }
    break;
    case 2:
    printf("enter the num");
    scanf("%d",&p);
    //for spaces
    for(i=0;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
         //sp char
        for(j=0;j<=i;j++){
            if(j%2==0){
                printf("#");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
break;
default:
printf("Invalid choice");
}
return 0;
}