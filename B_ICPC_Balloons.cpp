#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int s;
    string b;
    cin>>s>>b;
int freq [26]={0};
    for (int i = 0; i < s; i++)
    {int val=b[i]-65;
        freq[val]++;
       
       
    }
    int ballon=0;
    for (int i = 0; i < 26; i++)
    {if(freq[i]>0)
   
  
        if(freq[i]==1)
        {
ballon+=2;
        }
        else if(freq[i]>1)
        {
ballon=ballon+(1*2)+freq[i]-1;
        }
    }
    cout<<ballon<<endl;
  }
  



    return 0;
}