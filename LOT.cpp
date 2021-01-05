#include<bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    node* left;
    node* right;
};


node* getNode(char data)
{
    node* newNode = new node();
    
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    
    return newNode;
    
}

node* InsertNode(node* root,char data)
{
    if(root == NULL)
    {
        root = getNode(data);
    }
    else if(data<= root->data)
    {
        root->left = InsertNode(root->left,data);
    }
    else
    {
        root->right = InsertNode(root->right,data);
    }
    return root;
}

void levelOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* current = q.front();
        q.pop();
        cout<<current->data<<" ";
        if(current->left!=NULL)
        {
            q.push(current->left);
        }
        if(current->right!=NULL)
        {
            q.push(current->right);
        }
    }
}


int main()
{
    node* root = NULL;
    
    root = InsertNode(root,'M');
    root = InsertNode(root,'B');
    root = InsertNode(root,'Q');
    root = InsertNode(root,'A');
    root = InsertNode(root,'C');
    root = InsertNode(root,'Z');
    
    levelOrder(root);
    
}

