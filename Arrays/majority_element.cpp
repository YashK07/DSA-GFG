#include <bits/stdc++.h>
using namespace std;

//if an element appears more than n/2 times in the array, its a majority element

//moore algorithm 
int findMajority(int arr[],int n)
{
    int res = 0;//initial result index
    int count = 1;

    for(int i = 1;i<n;i++)
    {
      if(arr[i]!=arr[res])
      {
        count--;
      }
      else if(arr[i]==arr[res])
      {
        count++;
      }

      if(count==0)
      {
        res = i;
        count = 1;
      }
    }

    count = 0;
    for(int i = 0;i<n;i++) //check if the found element is really the majority
    {
      if(arr[i]==arr[res])
      count++;
    }

      if(count<=n/2)
      return -1;

      else return arr[res];
  }


    int main()
    {
      int arr[] = {2,3,4,4,5,4,4};
      int ans = findMajority(arr,7);

      cout<<ans;
    }
