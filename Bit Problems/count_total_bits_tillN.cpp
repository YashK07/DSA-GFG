//Given an integer N, count the total bits in the number till N.
#include <bits/stdc++.h>
using namespace std;

int largestPower2(int n)
    {
        //largest power of 2
       int x = 0;
       while((1<<x)<=n)
       {
           x++;
       }
       return x-1; //x increamented in the last iteration
    }

    int countSetBits(int n)
    {
        if(n==0)
        return 0;

       int x = largestPower2(n);
       int bitsTillpow2 = (1 << (x-1))*x;
       int significantBits = n-(1 << x) + 1;
       int remainingBits = countSetBits(n-(1 << x));
       int ans = bitsTillpow2 + significantBits + remainingBits;

       return ans;
       //bits till highest power of 2 + most significant bits of the remaining + countbits(remaining numbers)
    }


    int main()
    {
      int n;
      cin>>n;
      cout<<countSetBits(n);
    }
