#include <bits//stdc++.h>
using namespace std;

int main() 
{
    int n;cin>>n;
    queue<int>q;
    queue<int>q1;
    for(int i=0;i<n;i++){
      int x;cin>>x;
      q.push(x);
    }
    
     for(int i=0;i<n/2;i++){
       q1.push(q.front());
       q.pop();
    }
    
    while(!q1.empty()){
      q.push(q1.front());
      q1.pop();
      
      q.push(q.front());
      q.pop();
      
    }
    
    while(!q.empty()){
      cout<<q.front()<<" ";
      q.pop();
    }
    
    // cout<<endl;
    
    //   while(!q1.empty()){
    //   cout<<q1.front()<<" ";
    //   q1.pop();
    // }
    
    
    
    
    
}