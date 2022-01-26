#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n) {

       int i = 0,j = n-1;
       long long suml = a[0],sumr = a[n-1];

       if(n==1)
       return 1;

       while(i<=j)
     {
           if(suml>sumr)
           {
               j--;
               sumr+=a[j];
               //cout<<sumr<<" "<<j<<endl;
           }
           else if(sumr>suml)
           {
               i++;
               suml+=a[i];
               //cout<<suml<<" "<<i<<endl;
           }
           else if(sumr==suml && (j-i)==2)
           {
              //cout<<i<<j;
              return i+2;
           }
           else
            {
              i++;
              j--;
               sumr+=a[j];
               suml+=a[i];

            }
       }
       return -1;
    }


    int main()
    {
      long long arr[] = {
        4, 42, 27, 16, 28, 3, 4, 5, 9, 3, 31, 5, 5, 29, 10, 18, 35, 35, 33, 19, 41, 23, 8, 32, 9, 5, 8, 18, 35, 13, 6, 7, 6, 10, 11, 13, 37, 2, 25, 7, 28, 43};

        int ans = equilibriumPoint(arr,42);
        cout<<ans;
    }
