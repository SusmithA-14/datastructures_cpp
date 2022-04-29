#include<bits/stdc++.h>
using namespace std;
struct mystack{ 
    int *arr;
    int capacity;
    int top;
    mystack(int c){//constructer
        arr=new int[c];
        capacity=c;
        top=-1;
    }
    void push(int val){//void bcz we are not returning any value(we're just pushing).
        if(top==capacity-1){
            cout<<"Stack is filled";
            // if we write return we dont need to write else, if we dont use return we have to use else
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    int pop(){
        if(top==-1){
            return INT_MIN;
        }
        int ans=arr[top];
        top--;
        return ans;
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
    int empty(){
        /*if(top==-1){
            return TRUE;
        }
        return FALSE;*/
        return top==-1;//return true or false
    }
    
};
int main(){
    mystack *st=new mystack(5);
    st->push(10);
    st->push(20);
    cout<<st->peek()<<endl;
    cout<<st->pop()<<endl;
    st->push(30);
    st->push(40);
    cout<<st->size()<<endl;
    cout<<st->empty()<<endl;
    
    
    
}