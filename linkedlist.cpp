//Creation of Linked List
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void Display(Node *head){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    Node *head=new Node();
    Node *first=new Node();
    Node *second=new Node(); 
    //assign a data
    head->data=10;
    //to connect two nodes
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    Display(head);
}