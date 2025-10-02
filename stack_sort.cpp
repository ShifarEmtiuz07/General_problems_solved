#include <bits/stdc++.h>
using namespace std;

int main() 
{
int n;cin>>n;
stack<int>input;

for(int i=0;i<n;i++){
  int x;
  cin>>x;
  input.push(x);
}

stack<int>sorted;
while(!input.empty()){
  int top= input.top();
  input.pop();
  while(!sorted.empty() && sorted.top()<top){
    input.push(sorted.top());
    sorted.pop();
  }
  sorted.push(top);
}

for(int i=0;i<n;i++){
int top=sorted.top();
cout<<top<<" ";
sorted.pop();
}



}