#include <bits/stdc++.h>
using namespace std;


long long toh(int N, int from, int to, int aux) {
   if(N==1)
    {
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        return 1;
    }

    int count = toh(N-1,from,aux,to);

    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    count++;

    count+= toh(N-1,aux,to,from);

    return count;
}

int main()
{
  //cout<<"***"<<endl;
  int ans = toh(2,1,3,2);
  cout<<"The count is "<<ans;
}
