/* Get minimum element from stack 

You are given N elements and your task is to Implement a Stack
in which you can get minimum element in O(1) time.

Input->>

push(2)
push(3)
pop()
getMin()
push(1)
getMin()
Output: 3 2 1
Explanation: In the first test case for
query 
push(2)  Insert 2 into the stack.
         The stack will be {2}
push(3)  Insert 3 into the stack.
         The stack will be {2 3}
pop()    Remove top element from stack 
         Poped element will be 3 the
         stack will be {2}
getMin() Return the minimum element
         min element will be 2 
push(1)  Insert 1 into the stack.
         The stack will be {2 1}
getMin() Return the minimum element
         min element will be 1

*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int>ss;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(ss.size()==0){
               return -1;
           }
           return ss.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.size()==0){
               return -1;
           }
           int a=s.top();
           s.pop();
           if(a==ss.top()){
               ss.pop();
           }
           return a;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           s.push(x);
           if(ss.size()==0 or x<=ss.top()){
               ss.push(x);
           }
       }
};
