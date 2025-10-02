#include <bits/stdc++.h>
using namespace std;


int main() 
{
  bool ans=true;
string a,b; cin>>a>>b;
vector<int>freq1(26,0);
vector<int>freq2(26,0);
for(char c:a){
  freq1[c-'a']++;
}
                                    //complexity O(n) =>better
for(char c:b){
  freq2[c-'a']++;
}

for(int i=0;i<26;i++){
  if(freq1[i]!=freq2[i]){
    ans=false;
  }
  //cout<<char(i+'a')<<" "<<freq1[i]<<endl;
}

cout<<(ans?"It is an Anagram ":"It is not an Anagram");



                         //////shortcut way
    
    sort(a.begin(),a.end());
       sort(b.begin(),b.end());              //complexity (nlogn)
       
  
      
      ((a==b)?cout<<"It is an Anagram "<<endl:cout<<"It is not an Anagram"<<endl);
    



  
    
    return 0;
}