/*
A
BB
CCC
DDDD
*/

#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<4;i++){
        char ch='A';
        for(j=0;j<=i;j++){
            printf("%c",ch+i);
        }
        printf("\n");
    }
    return 0;
}
