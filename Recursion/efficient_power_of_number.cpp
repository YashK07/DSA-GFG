
#include <bits/stdc++.h>
using namespace std;

    double solveneg(double x,int n)
    {
        if(n==0)
            return 1.0;

        double temp = solveneg(x,n/2);
        cout<<temp;

        if(n%2==0)
            return temp * temp;

        else
            return (temp * temp) / x;

    }
double myPow(double x, int n) {

        if(n<0)
           return solveneg(x,n);

        if(n==0)
            return 1.0;

        double temp = myPow(x,n/2);

        if(n%2==0)
            return temp * temp;

        else
            return x*temp*temp;

    }


    int main()
    {
      cout<<myPow(3.0,3);

    }
