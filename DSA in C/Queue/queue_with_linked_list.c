#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

//making front and rear ptr global variable

struct Node *f=NULL;
struct Node *r=NULL;


void LinkedListTraversal(struct Node *ptr){
       while(ptr != NULL){
        printf("Element is %d \n",ptr->data);
        ptr =ptr->next;

    }
}

void enqueue(int val){
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue OverFlow");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}

int dequeue(){
    int val;
    struct Node *ptr=f;
    if(f==NULL){
        printf("queue empty");
    }
    else{
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}

int main(){
    LinkedListTraversal(f);
    enqueue(350);
    enqueue(35);
    enqueue(10);
    printf("Dequeue element -> %d\n",dequeue());
     LinkedListTraversal(f);
    return 0;
}