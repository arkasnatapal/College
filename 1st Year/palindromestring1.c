//using string.h
#include<stdio.h>
#include<string.h>
void palindrome(int n ,char ch[]){
    int len=strlen(ch);
    int ispalin=1;
    for(int i=0;i<len/2;i++){
        if(ch[i]!=ch[len-i-1]){
            ispalin=0;
            break;
        }
    }
    if(ispalin){
        printf("plaindrome");
    }
    else{
        printf("Palindrome not ");
    }
    
}
int main(){
char ch[200];
printf("enter the sentence \n");
fgets(ch,sizeof(ch),stdin);
for(int i=0;ch[i]!='\0';i++){
    if(ch[i]=='\n'){
        ch[i]='\0';
    }
}
palindrome(200,ch);
return 0;
}