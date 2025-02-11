#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*left;
  struct node*right;

};
struct node*create()
{
    int element;
    struct node*newNode=malloc(sizeof(struct node));
    printf("Enter Data or -1 for no node : ");
    scanf("%d",&element);
    if(element==-1)
    {
        return 0;
    }
    newNode->data=element;
    printf("Enter left child of %d ",element);
    newNode->left=create();
    printf("Enter Right Child of %d ",element);
    newNode->right=create();

    return newNode;

};


void preorder(struct node*root)
{
    if(root==0)
    {
        return;
    }

    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node*root)
{
    if(root==0)
    {
        return;
    }

    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node*root)
{
    if(root==0)
    {
        return;
    }


    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}


int main()
{
    struct node*root;
    root=create();
    printf("\n PreOrder traversal :\n");
    preorder(root);
    printf("\n inOrder traversal :\n");
    inorder(root);
    printf("\nPostOrder traversal :\n");
    postorder(root);
    return 0;
}
