#include<stdio.h>
#include<math.h>
void words(int n,char ch[]){
    int c=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            c++;
        }
    }
    c++;
    printf("no of words = %d",c);
}
int main(){
char ch[500];
fgets(ch,sizeof(ch),stdin);
words(500,ch);
return 0;
}