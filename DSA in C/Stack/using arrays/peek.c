#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

//Checking Empty or Full 
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

//Pushing Value 
void push(struct stack *sp,int value){
    if(isFull(sp)){
        printf("Stack Overflow, can't add %d in the stack\n",value);
    }
    else{
        sp->top++;
        sp->arr[sp->top]=value;
    }
}
//Poping Last Value
int pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("Stack UnderFlow\n");
    }
    else{
        int val=sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
int peek(struct stack *sp,int i){
    int arridx=sp->top-i+1;
    if(arridx < 0){
        printf("Not a valid position for the stack \n");
        return -1;
    }
    else{
        return sp->arr[arridx];
    }
}
int main(){
struct stack *sp =(struct stack*)malloc(sizeof(struct stack));
sp->size=5;
sp->top=-1;
sp->arr=(int *)malloc(sp->size *sizeof(int));

//Before pushing checking Full or Empty
printf("Empty -> %d\n",isEmpty(sp));
printf("Full -> %d\n",isFull(sp));

//Pushing Value 
push(sp,56);
push(sp,45);
push(sp,567);
push(sp,12);
push(sp,15);
push(sp,124);

//poping values
printf("Poping %d from the stack\n",pop(sp));

//After Pushing Checking 
printf("Empty -> %d\n",isEmpty(sp));
printf("Full -> %d\n",isFull(sp));


for(int j=0;j<sp->top+1;j++){
    printf("the value at idx %d is %d \n",j,peek(sp,j));
}
return 0;
}