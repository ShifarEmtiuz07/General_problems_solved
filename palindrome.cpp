#include <bits/stdc++.h>
using namespace std;


int main() 
{
  
 string s,rev;
 cin>>s;
 rev=s;
reverse(rev.begin(),rev.end());

if(s== rev)cout<<"It is a palindrome"<<endl;
else cout<<"It is not a palindrome"<<endl; 

  
    
    return 0;
}