#include <bits/stdc++.h>
using namespace std;

int maxNormalSum(int arr[],int num) //kadane algorithm
{
    int sum = arr[0],res = arr[0];
    for(int i = 1;i<num;i++)
    {
        sum = std::max(sum + arr[i],arr[i]);
        res = std::max(res,sum);
    }
    return res;
}
    int minNormalSum(int arr[],int num) //modified  algorithm
{
    int sum = arr[0],res = arr[0];
    for(int i = 1;i<num;i++)
    {
        sum = std::min(sum + arr[i],arr[i]);
        res = std::min(res,sum);
        //cout<<sum<<" "<<res<<" ";
    }
    return res;
}
//circular sum --> sum of all elements - minsum (sum of first and last elements of an array i.e, the middle elements excluded)
int circularSubarraySum(int arr[], int num){
    int sum;
    int maxSum = maxNormalSum(arr,num);
    int minSum = minNormalSum(arr,num);
    cout<<maxSum<<" "<<minSum<<endl;
    for(int i = 0;i<num;i++)
    {
        sum+=arr[i];
    }

    return std::max(maxSum,sum - minSum); //max of normal sum and circular sum
}

int main()
{
int arr[] = {8,-8,9,-9,10,-11,12};
int ans = circularSubarraySum(arr,7);
cout<<ans;
}
