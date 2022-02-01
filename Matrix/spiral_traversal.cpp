#include <bits/stdc++.h>
using namespace std;



//const int r = 4, c = 4;

  vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
      {
          vector<int>ans;
          int top = 0,bottom = r-1,left = 0,right = c-1;

          while(top<=bottom && left<=right)
          {
              for(int i = left;i<=right;i++)
              {
                     //cout<<matrix[top][i]<<endl;
                     ans.push_back(matrix[top][i]);
              }
              top++;
              //cout<<top<<endl;
              for(int i = top;i<=bottom;i++){
                  //cout<<matrix[i][right]<<endl;
                  ans.push_back(matrix[i][right]);
              }
              right--;
              //cout<<right<<endl;
              if(top<=bottom)
              {
                 for(int i = right;i>=left;i--)
              {
                  //cout<<matrix[bottom][i]<<endl;
                  ans.push_back(matrix[bottom][i]);
              }
                bottom--;
              }

              //cout<<bottom<<endl;
              if(left<=right)
              {
                  for(int i = bottom;i>=top;i--)
              {
                  //cout<<matrix[i][left]<<endl;
                  ans.push_back(matrix[i][left]);
              }
              left++;
              }

              //cout<<left<<endl;
          }
          return ans;

          }
int main()
{



}
