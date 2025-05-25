#include<stdio.h>
#include<math.h>
void length(int n,char ch[]){
 int x=0;
 for(int i=0;ch[i]!='\0';i++){
    x++;
 }   
 printf("length is %d", x-1);
}
int main(){
char ch[500];
fgets(ch,sizeof(ch),stdin);
length(500,ch);
return 0;
}