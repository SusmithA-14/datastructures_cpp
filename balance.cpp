/* to check whether given is balnced or not ->>if there is { or [ or ( then 
the stack should also contain },],) then it is balanced then return true or else false.
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  stack<char>st;
  bool flag =1;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='(' or s[i]=='{' or s[i]=='[')
      {
          st.push(s[i]);
      }
      else{
          if(s[i]==')' and !st.empty() and st.top()=='(')
          {
             st.pop();
          }
          else if(s[i]==']' and !st.empty() and st.top()=='[')
          {
             st.pop();  
          }
          else if(s[i]=='}' and !st.empty() and st.top()=='{')
          {
             st.pop();
          }
          else{
              flag=0;
              break;
          }
      }
  }
  if(st.size()==0 and flag==1)
  {
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
}