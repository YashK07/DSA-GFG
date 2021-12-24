#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string s,int start,int end)
{

  if(start>=end)
  return true;

  //cout<<s[start]<<" "<<s[end]<<endl;
  return (s[start]==s[end] && check_palindrome(s,start+1,end-1));
}

int main()
{
  string s;
  cin>>s;
  int start = 0;
  int end = s.length()-1;

  if(check_palindrome(s,start,end))
  cout<<"This is a palindrome String!!";

  else
  cout<<"Not a palindrome string :(";

  return 0;
}
