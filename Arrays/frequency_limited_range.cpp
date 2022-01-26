#include <bits/stdc++.h>
using namespace std;


void frequencyCount(vector<int>& arr,int N, int P)
    {
        vector<int>v(N+5,0);
        for(int i = 0;i<N;i++)
        {
            if(arr[i]<=N)
            v[arr[i]] +=1;
        }
        for(int i = 0;i<N;i++)
        {
              arr[i] = v[i+1];
        }
    }

int main()
{
  vector<int>arr(5,1);
  frequencyCount(arr,5,1);

  for(int i = 0;i<5;i++)
  {
    cout<<arr[i];
  }
}
