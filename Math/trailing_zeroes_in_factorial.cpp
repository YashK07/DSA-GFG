#include <iostream>
using namespace std;

int fact(int n) //recursive approach
{
 if(n==0)
 return 1;

 return n*fact(n-1); //3 * (2 * (1 * 1))
}


int main()
{
  //naive approach
  int n,facto,count;
  cout<<"Enter the number";
  cin>>n;
  
  facto = fact(n);
  while(n%10==0){
    facto = facto/10;
    count++;
  }
  cout<<count<<endl;

  //count total 5s 2s in the no-->Efficient
  count = 0;
  for(int i = 5;i<=n;i=i*5)
  {
    count = count + n/i;
  }
  cout<<count;
}
