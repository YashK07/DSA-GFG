#include <bits/stdc++.h>
using namespace std;


//given - [1234]-->[4132] max,min,2ndmax,2ndmin.....


/*Think in terms of storing two data values in once place by using Quotient,
 Divisor, Divident rule and extract old and new values by using modulo and division operator respectively. */

/*note  that even positions have stored max elements whereas odd positions have stored min elements*/
void rearrange(long long *arr, int n)
{
    int left=0;
    int right=n-1;
    int m=arr[n-1]+1;

  for(int i = 0;i<n;i++)
  {
     if(i%2==0)
    {
        arr[i]=(arr[right]%m)*m + arr[i];
        right--;
    }
    else
    {
        arr[i]=(arr[left]%m)*m +arr[i];
        left++;
    }
  }

  for(int i = 0;i<n;i++)
  {
      arr[i] = arr[i]/m;
  }

}

int main()
{
  long long arr[n] = {1,2,3,4,5};
  rearrange(arr,5);

}
