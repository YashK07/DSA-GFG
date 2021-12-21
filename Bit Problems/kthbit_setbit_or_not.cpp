checkKthBit(int n, int k)
    {
        if(n%2!=0 && k==0)
        return true;

        if(floor(log2(n))==ceil(log2(n)))
        {
             if(k == log2(n))
             return true;

             else
             return false;
        }



      int pos;
        while(n>0)
   {
       pos = floor(log2(n));
       //cout<<floor(log2(n))<<" ";

       if(k == pos)
       return true;

       n = n - pow(2,floor(log2(n)));
   }
       return false;


    }

    int main()
    {
      int n, k;
      cin>>n>>k;
      cout<<getFirstSetBit(n,k);
    }
