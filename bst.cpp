#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};


struct node* createNode(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}



struct node* insert(struct node* root, int data)
{
    
    if (root==NULL)
    {
        root = createNode(data);
        return root;
    }
    else if(data<=root->data)
    {
        root->left = insert(root->left,data);
        return root;
    }
    else
    {
        root->right = insert(root->right,data);
        return root;
    }
    
}


bool search(struct node* root,int data)
{
    if(root == 0)
    {
        return false;
    }
    if(root->data == data)
    {
        return true;
    }
    else if(data<=root->data)
    {
        return search(root->left,data);
    }
    else
    {
        return search(root->right,data);
    }
}




int main()
{
    struct node* root;
    root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,25);
    root = insert(root,8);
    root = insert(root,12);
    int number;
    // int i = 5;
    // while(i--)
    printf("Enter the number to be searched........ : ");
    scanf("%d",&number);
    if(search(root,number)==true)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}

