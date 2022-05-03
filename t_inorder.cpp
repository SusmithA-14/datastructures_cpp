//inorder
#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node *right;
    node(int x){
        data =x;
        left=right=NULL;
    }
};
void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    inorder(root);
    
}