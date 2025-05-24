#include<stdio.h>
void charfreq(int n,char ch, char ch1[]){
int c=0;
for(int i=0;ch1[i]!='\0';i++){
    if(ch1[i]==ch){
        c++;
    }
}
printf(" the number of time the character is present is %d",c);
}
int main(){
char ch1[500],ch;
printf("enter the sentence");
fgets(ch1,sizeof(ch1),stdin);
printf("enter the char");
scanf("%c",&ch);
charfreq(500,ch,ch1);
return 0;
}