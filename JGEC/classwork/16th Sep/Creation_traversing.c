#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// Initializing Node 
struct Node{
    int data;
    struct Node * next;
};

// Ptr for Traversing
void LinkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element is %d \n",ptr->data);
        ptr =ptr->next;

    }
}

int main(){
    //initialising head , second and third node
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // creating memories for the nodes
    head=(struct Node *)malloc(sizeof(struct Node)); 
    second=(struct Node *)malloc(sizeof(struct Node));    
    third=(struct Node *)malloc(sizeof(struct Node));

    //initialising the nodes data and linking to the next node
    head->data=7;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=11;
    third->next=NULL;
    
    // for traversing we need to give the head as a ptr to the traversing function 
    LinkedListTraversal(head);

return 0;
}