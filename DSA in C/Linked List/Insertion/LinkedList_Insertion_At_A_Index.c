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

struct Node *InsertAtIndex(struct Node *head, int data, int index){ 
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));   //Node creation
    struct Node *p= head;   //2nd ptr that will traverse 

    // Running a loop upto Index-1 and storing the new node that is the Ptr in Index 
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    //Linking 
    ptr->data =data;
    ptr->next = p->next;
    p->next=ptr;
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

    head = InsertAtIndex(head,56,2);  
    LinkedListTraversal(head);  // now we wil traverse and get the element 

return 0;   
}