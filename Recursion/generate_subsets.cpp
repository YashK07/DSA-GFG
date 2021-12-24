#include <bits/stdc++.h>
using namespace std;

void subsets(string s, string current = "", int i = 0)
{
  if(i==s.size())
  {
    cout<<current<<endl;
    return;
  }
  subsets(s,current,i+1);
  subsets(s, current + s[i], i+1);
}

int main()
{
  string s;
  cin>>s;
  subsets(s);

  return 0;
}
