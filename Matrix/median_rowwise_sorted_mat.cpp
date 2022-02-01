#include <bits/stdc++.h>
using namespace std;

//rotate the matrix by 90 degree anti clockwise


const int r = 3, c = 3;

int median(int arr[r][c],int m,int n) //efficient sol
{

  int min = INT_MAX,max = INT_MIN;
  for(int i = 0;i<r;i++)
  {
    max = std::max(arr[i][c-1],max);
  }
  for(int i = 0;i<r;i++)
  {
    min = std::min(arr[i][0],min);
  }
  int med = (m*n+1)/2;


  while(min<max)
  {
    int mid = (max + min)/2;
    int midp = 0;

    for (int i = 0; i < r; ++i)
    {
    midp += std::upper_bound(arr[i], arr[i]+c, mid) - arr[i];
    cout<<midp<<" ";
    }
    cout<<endl;
		if (midp < med)
			min = mid + 1;
		else
			max = mid;
	}
	return min;

  }

int main()
{
  int arr[r][c] = {{1,2,4},{3,7,8},{6,12,13}};

  median(arr,3,3);

}
