#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int N)
{

   if(floor(log2(N))==ceil(log2(N)))
   {
       return 1;
   }

    int pos=0,temp=0,count=1,max=1;

   while(N>0)
   {
       pos = floor(log2(N));

       if(temp == pos+1)
       {
           //cout<<temp<<" "<<pos<<" ";
           count++;
           if(count>=max)
           {
              max = count;
              //cout<<max;
           }
       }
       else if(temp!=pos+1)
       {
           count = 1;
       }
      
       N = N - pow(2,floor(log2(N)));
       temp = pos;
   }

    return max;
  }

int main()
{
  int n;
  cin>>n;

  cout<<maxConsecutiveOnes(n);
  return 0;
}
