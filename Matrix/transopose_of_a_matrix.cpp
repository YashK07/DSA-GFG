#include <bits/stdc++.h>
using namespace std;


const int r = 4,c = 4;
void transpose(int arr[r][c])
{
  for(int i = 0;i<r;i++)
  {
    for(int j = i+1;j<c;j++)
    {
     swap(arr[i][j],arr[j][i]);
    }
  }
}










int main()
{
  int arr[r][c] = {{1,2,3,4},{6,7,8,9},{11,12,13,14},{16,17,18,19}};
  transpose(arr);
  for(int i = 0;i<r;i++)
  {
    for(int j = 0;j<c;j++)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

}
