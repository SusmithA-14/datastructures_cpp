//Insertion in Linked List

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int val){
    Node *newnode= new Node();
    newnode->data=val;
    if(head==NULL){
        head=newnode;
        return;
    }
    Node *curr =head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next= newnode;
    
}
void Display(){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    insert(20);
    insert(12);
    insert(90);
    Display();
}