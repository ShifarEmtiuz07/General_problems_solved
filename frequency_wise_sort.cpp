#include <bits/stdc++.h>
using namespace std;
vector<int>freq(13,0);

bool cmp(int a, int b){
  if(freq[a]>freq[b]){return true;}
  else if(freq[a]<freq[b]){ return false;}
  else{
    if(a>b ){return true;}
    else return false;
  }
}

int main() 
{
  
  vector<int>v={1,1,2,2,3,2,2,2,4,1,7,8,7,7,7};
  
  for(int val:v){
    freq[val]++;
  }
  
  sort(v.begin(),v.end(),cmp);
  
    for(int val:v){
    cout<<val<<" ";
  }
  
  
    
    return 0;
}