#include <bits/stdc++.h>
using namespace std;


int main() 
{

string s,ans;
cin>>s;

///////// Option 1 //////////
 
for(int i=0;i<s.size();i++){
  if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'  ){
    s.erase(i,1);
    i--;
  }
}
cout<<s<<endl;


///////// Option 2 //////////


for(char c:s){
  int idx=string("aeiou").find(c);
  if(idx == -1){
    ans += c;
    
  }
}

cout<<ans<<endl;
    



  
    
    return 0;
}