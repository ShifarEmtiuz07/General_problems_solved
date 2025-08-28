#include <bits/stdc++.h>
using namespace std;

int main() 
{
int n;cin>>n;
vector<int>v(n);
vector<int>ans(n);
stack<int>st;

for(auto &x:v){
  cin>>x;
}

for(int i=n-1;i>=0;i--){
  
   while(!st.empty() && st.top()<= v[i]){
     st.pop();
   }
   
   if(st.empty()){
     ans[i]=-1;
     }
     else{ 
       ans[i]=st.top();
       st.push(v[i]);
    
     }
   

   
  
}

for(auto x:ans ) cout<<x<<" ";




}