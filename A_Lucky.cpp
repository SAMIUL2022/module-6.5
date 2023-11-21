#include <bits/stdc++.h>

using namespace std;

int main ()

{int t;
cin>>t;
  while (t--)
  {
   string s;
  cin>>s;
  int flag=0;
  for (int i = 0; i < 6; i++)
  {
    if(s[i]+s[i+1]+s[i+2]==s[i+3]+s[i+4]+s[i+5])
    {
        flag=1;
        break;
    }
    
  }
  
if(flag==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
  }
  

    return 0;
}