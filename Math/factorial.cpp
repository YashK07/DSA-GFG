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
  int n,facto = 1;
  cout<<"Enter the number";
  cin>>n;
  cout<<fact(n)<<endl;

  //Iterative
  for(int i = 2;i<=n;i++) // 2(i)*1 * 3(i) * 4(i)...
  {
    facto = facto * i;
  }
  cout<<facto;
}
