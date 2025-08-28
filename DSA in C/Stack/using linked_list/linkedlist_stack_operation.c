#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int isEmpty(struct Node* top){
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
    while(ptr != NULL){
        printf("Element is %d \n",ptr->data);
        ptr =ptr->next;

    }
}

struct Node* push(struct Node *top,int val){
    if(isFull(top)){
        printf("Stack Overflow can't add more values");
    }
    else{
        struct Node *n=(struct Node*)malloc(sizeof(struct Node));
        n->data=val;
        n->next=top;
        top=n;
        return top;
    }
}


int pop(struct Node** top){
    if(isEmpty(*top)){
printf("Stack Underflow");
    }
    else{
        struct Node *n=*top;
        *top=(*top)->next;
        int x=n->data;
        n->next=*top;
        free(n);
        return x;
    }
}


int main(){
struct Node *top=NULL;
top = push(top,78);
top = push(top,45);
top = push(top,412);
top = push(top,47);
int Element;
Element=pop(&top);
printf("Popped element is %d \n",Element);
LinkedListTraversal(top);
return 0;
}