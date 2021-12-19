#include <iostream>
using namespace std;

int main()
{
int n, r=0,rev=0;
cout<<"Enter the number"<<endl;
cin>>n;
int temp = n;
while(n>0)
{
  r = n%10;
  n = n/10;
  rev =  rev * 10 + r;
}
if(temp==rev)
cout<<"Palindorme Number Found";
else
cout<<"This isn't a Palindorme!!";

}
