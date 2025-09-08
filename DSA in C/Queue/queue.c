#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct queue *q){
    if(q->f==q->r){
        return 1;
    }
    else{
        return 0;
    }
}

int dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("Queue is Empty");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("Queue overloaded");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int main(){
    struct queue q;
    q.size=100;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size * sizeof(int));

    enqueue(&q,56);
    enqueue(&q,12);
    printf("Dequeueing element %d",dequeue(&q));

return 0;
}