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

struct Node *InsertAtFirst(struct Node *head, int data){
    struct Node *ptr; //we will assign a node 
    ptr=(struct Node *)malloc(sizeof(struct Node)); //allocate memory to the ptr 
    ptr->data=data; // this data will be given by the user
    ptr->next=head; // next ptr directing is towards the previous head
    return ptr; 
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

    head = InsertAtFirst(head,56);  // as the node is inserted before the previously created Head so we need to update the head 
    LinkedListTraversal(head);  // now we wil traverse and get the element 

return 0;   
}