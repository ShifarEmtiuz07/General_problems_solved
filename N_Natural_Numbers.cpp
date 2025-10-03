#include <bits//stdc++.h>
using namespace std;

int main() 
{

    int n;cin>>n;
    queue<int>q;
    q.push(1);
    q.push(2);
     q.push(3);
    for(int i=0;i<n;i++){
      int x=q.front();
      cout<<x<<endl;
      q.push(x*10+1);
      q.push(x*10+2);
         q.push(x*10+3);
      q.pop();
    }
    
}


// output:

// 1
// 2
// 3
// 11
// 12
// 13
// 21
// 22
// 23
// 31
// 32
// 33
// 111
// 112
// 113
// 121
// 122
// 123
// 131
// 132