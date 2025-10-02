#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int n;cin>>n;

queue<int>q;
q.push(1);
for(int i=1;i<=n;i++){
  int x=q.front();
  q.pop();
  cout<<x<<endl;
  q.push(x*10+0);
  q.push(x*10+1);
}
 
 
 
}