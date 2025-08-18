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

struct Node *InsertAtEnd(struct Node *head, int data){ 
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));   //Node creation
    struct Node *p= head;   //2nd ptr that will traverse 

    // Running a loop upto last element and storing the new node that is the Ptr at the last  
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
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

    head = InsertAtEnd(head,56);  
    LinkedListTraversal(head);  // now we wil traverse and get the element 

return 0;   
}