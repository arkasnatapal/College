#include<stdio.h>
#include<math.h>
void cbv(int x, int y){
    int temp=y;
    y=x;
    x=temp;
    printf("\nAfter Swapping by call by value x= %d y= %d\n",x,y);
}
void cbr(int *x, int *y){
    int temp=*y;
    *y=*x;
    *x=temp;
    printf("\nAfter Swapping by call by ref x= %d y= %d\n",*x,*y);
}
int main(){
int x,y;
printf("enter x and y\n");
scanf("%d %d",&x,&y);
printf("Before Swapping x= %d y= %d\n",x,y);
cbv(x,y);
cbr(&x,&y);
return 0;
}