#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int n;cin>>n;
 int k;cin>>k;
 queue<int>q;
 stack<int>st;
 for (int i=0;i<n;i++){
   int x;cin>>x;
   q.push(x);
 }
 
 for(int i=0;i<k;i++){
   st.push(q.front());
   q.pop();
 }
 

 
   while(!st.empty()){
   q.push(st.top());
   st.pop();
 }
 
  for(int i=0;i<n-k;i++){
   q.push(q.front());
   q.pop();
 }
 
 while(!q.empty()){
   cout<<q.front()<<" ";
   q.pop();
 }
 
 cout<<endl;
 
//   while(!st.empty()){
//   cout<<st.top()<<" ";
//   st.pop();
// }
 
 
 
 
}