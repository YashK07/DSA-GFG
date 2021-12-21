#include <bits/stdc++.h>
using namespace std;


int getFirstSetBit(int n) //efficient
   {
       if(n==0)
       {
           return 0;
       }

       if(n%2!=0)
       return 1;

       if(floor(log2(n))==ceil(log2(n)))
       return 1 + log2(n);

       int pos;


       while(n>0)
       {
           pos = 1 + log2(n);
           n = n - pow(2,floor(log2(n)));
       }

       return pos;
   }


   int main()
   {
     int n;
     cin>>n;
     cout<<getFirstSetBit(n);
   }
