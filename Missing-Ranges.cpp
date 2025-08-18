#include <bits/stdc++.h>
using namespace std;

int main() 
{
   vector<int>v={0,1,3,50,75};  //
   vector<vector<int>>ans;
   int lower=0, upper=99;
   
   v.insert(v.begin(),lower-1);
   v.push_back(upper+1);
   
   for(int i=0;i<v.size()-1;i++){
     if(v[i+1]-v[i]>1){
       ans.push_back({v[i]+1,v[i+1]-1});
     }
   }
   
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  
}