#include <bits/stdc++.h>
using namespace std;

//rotate the matrix by 90 degree anti clockwise


const int r = 4, c = 4;
//given a row wise sorted matrix and column wise sorted matrix
//start from top right corner--> is target is less, move left, if greater move down.
void search(int arr[r][c],int t) //efficient sol
{
  int i  = 0, j = c - 1;

  while(i < r && j >= 0)
{
  if(arr[i][j] == t)
  {
    cout << "Found at (" << i << ", " << j << ")";

    return;
  }
  else if(arr[i][j] > t)
  {
    j--;
  }
  else
  {
    i++;
  }
}
cout<<"Element not found!!";
}

//2nd efficient = do the transpose, title it vertically (1st row become the last row, 2nd row --> 2nd last roww and so on)


int main()
{
  int arr[r][c] = {{1,2,3,4},{6,7,8,9},{11,12,13,14},{16,17,18,19}};
  int m = 1;
  int n = 4;
  search(arr,100);
  /*
  for(int i = 0;i<r;i++)
  {
    for(int j = 0;j<c;j++)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
*/
}
