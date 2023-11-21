#include <bits/stdc++.h>

using namespace std;

int main ()

{
  string s;
  getline(cin,s);
  stringstream ss(s);
  string word;
  string revised;
  while (ss>>word)

  {
    reverse(word.begin(),word.end());
    
revised+=word+' ';
  }
  

  if(!revised.empty()){

    revised.pop_back();
  }
cout <<revised<<endl;



    return 0;
}