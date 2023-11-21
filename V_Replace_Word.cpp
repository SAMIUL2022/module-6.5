#include <bits/stdc++.h>

using namespace std;

int main ()

{
  string s;
  getline(cin,s);
int t= s. find("EGYPT");
// for (int i = 0; i <s.size(); i++)
// {
//   s.
// //    if(s[i]=='E'&& s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T') 
// // {cnt=i;

// //  s.replace(i,5," ");}
// }
// cout<<t;
while (t!=-1)
{
   s.replace(t,5," ");
    t = s.find("EGYPT"); 
}




cout<<s<<endl;

    return 0;
}