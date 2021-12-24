#include <bits/stdc++.h>
using namespace std;

void towerHanoi(int n,char A,char B,char C) //eg - n = 2
{
  if(n==1)
  {
    cout<<"Move 1 from "<<A<<"to "<<C; // 1 ---> A TO B (1ST CALL), 1--->B TO C (2ND CALL)
    return;
  }
  towerHanoi(n-1,A,C,B);
   cout<<"Move " << n << " from " <<  A << " to " << C << endl; // 2---> A TO C
  towerHanoi(n-1,B,A,C);
}


int main()
{
  int n;
  cin>>n;
  towerHanoi(n,'A','B','C');
}
