#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node *top){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void LinkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("The element is %d \n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node *push(struct Node *top,int val){
    if(isFull(top)){
        printf("Stack Overflow");
    }
    else{
        struct Node* n=(struct Node*)malloc(sizeof(struct Node));
        n->data=val;
        n->next=top;
        top=n;
        return top;
    }
    
}

int peek(struct Node*top,int pos){
    struct Node* ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("Stack Underflow");
    }
    else{
        struct Node* n=*top;
        *top=(*top)->next;
        int x=n->data;
        n->next=*top;
        free(n);
        return x;
    }
}
int main(){
struct Node *top=NULL;
top=push(top,56);
top=push(top,14);
top=push(top,66);
LinkedListTraversal(top);
printf("The element at idx 1 is %d \n",peek(top,1));
return 0;
}