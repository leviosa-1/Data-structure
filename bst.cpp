#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    
};
struct node *root;

class bst
{
    private : struct node  *r, *temp, *prev;
    
    public : bst()
             {root=NULL;}
             void preorder(struct node *root);
             void inorder(struct node *root);
             void postorder(struct node *root);
             void insertbst(int val);
};

void bst :: preorder(struct node *root)
{
    cout<<root->left<<" ";
    preorder(root->left);
    preorder(root->right);
}
void bst :: inorder(struct node *root)
{
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);  
}
void bst ::  postorder(struct node *root)
{
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
 void bst :: insertbst(int val)
 {
    r=new node;
    r->data=val;
    r->left=r->right=NULL;
    if(root==NULL)
    root=r;
    else
    {
        temp=root;
        while(temp!=NULL)
        {
            prev=temp;
            if(temp->data > val)
               temp=temp->left;
            else
               temp=temp->right;
        }
        if(prev->data > val)
          prev->left=r;
        else
          prev->right=r;

    }
 }
 int main()
 {
    bst b;
    b.insertbst(20);
    b.insertbst(10);
    b.insertbst(5);
    b.insertbst(25);
    b.insertbst(30);
    b.insertbst(35);
    b.insertbst(8);
    b.insertbst(40);
    cout<<"inorder"<<endl;
    b.inorder(root);
    return 0;

 }