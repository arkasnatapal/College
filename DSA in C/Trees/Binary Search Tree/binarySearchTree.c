#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node *createNode(int data){
    struct node*n; // creating a node pointer
    n=(struct node*)malloc(sizeof(struct node)); // allocating memory in heap
    n->data=data; // setting data
    n->left=NULL; // setting left and right children to NULL
    n->right=NULL;
    return n; // finally returning the created node
}

void InOrder(struct node* root){
    if(root!=NULL){
        InOrder(root->left); // traverse left subtree
         printf("%d ",root->data); // visit root
        InOrder(root->right); // traverse right subtree
       
    }
}

int isBST(struct node* root){
    static struct node* prev = NULL;
    if(root!=NULL){
       if(!isBST(root->left)){
        return 0;
       }
       if(prev!=NULL && root->data <= prev->data){
        return 0;
       }
       prev =root;
       return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main(){
    // Constructing the root node - Using Function (Recommended)
    struct node* p = createNode(10);
    struct node* p1 = createNode(20);
    struct node* p2 = createNode(30);
    struct node* p3 = createNode(40);
    struct node* p4 = createNode(50);

    // Finally The tree looks like this:
    //       10
    //      /  \
    //     20   30
    //    / \
    //   40  50

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // InOrder Traversal
    printf("InOrder Traversal: ");
    InOrder(p);
    printf("\n");
    // Checking if the tree is BST
    if(isBST(p)){
        printf("The tree is a Binary Search Tree.\n");
    }
    else{
        printf("The tree is not a Binary Search Tree.\n");
    }

return 0;
}