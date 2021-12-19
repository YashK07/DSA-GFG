#include <bits/stdc++.h>
using namespace std;

//given an input string, we need to return a power set of the characters i.e, all possible combinations that forms a string
//eg. abc-->"","a","b","c"....."ac","bc"


void power_set(string s)
{
  int n = s.length();
  int powsize = pow(2,n);
  cout<<" "<<endl;
  for(int counter = 0;counter<powsize;counter++)
  {
    for(int j = 0;j<n;j++)
    {
      if((counter & (1 << j)) != 0) //check if its a set bit
      {
        cout<<s[j];
      }
    }
    cout<<endl;
  }

}

int main()
{
  string s;
  cin>>s;
  power_set(s);

  return 0;
}
