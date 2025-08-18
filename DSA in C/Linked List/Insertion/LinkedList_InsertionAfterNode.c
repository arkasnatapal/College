#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element is %d \n",ptr->data);
        ptr =ptr->next;
    }
}

//New node creation that is to be inserted

struct Node *InsertAfterNode(struct Node *prevnode, struct Node *head, int data){ 
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));   //Node creation
    ptr->data =data;

    ptr->next=prevnode->next;
    prevnode->next=ptr;

    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=9;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=99;
    third->next=NULL;

    head = InsertAfterNode(second,head,56);  
    LinkedListTraversal(head);  // now we wil traverse and get the element 

return 0;   
}