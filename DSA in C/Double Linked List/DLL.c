#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
};

void DLL_traversal(struct Node* ptr) {
    while(ptr != NULL) {
        printf("The Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void DLL_reverse_traversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Elements in REV ORDER is %d\n",ptr->data);
        ptr=ptr->prev;
    }
}

int main() {
    struct Node* N1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* N2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* N3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* N4 = (struct Node*)malloc(sizeof(struct Node));

    N1->data = 12;
    N1->prev = NULL;
    N1->next = N2;

    N2->data = 22;
    N2->prev = N1;
    N2->next = N3;

    N3->data = 32;
    N3->prev = N2;   
    N3->next = N4;

    N4->data = 42;   
    N4->prev = N3;   
    N4->next = NULL;

    DLL_traversal(N1);
    DLL_reverse_traversal(N4);
    return 0;
}
