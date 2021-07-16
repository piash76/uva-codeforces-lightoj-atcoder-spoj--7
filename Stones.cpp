    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
      int t,i,j,s,a,b,c;
      cin>>t;
      while(t--)
      {
          s=0;
          cin>>a>>b>>c;

            int x=c/2;
            int r=min(b,x);
            s+=(2*r)+r;
            int y=b-r;
            if(y>=2)
            {
                int z=y/2;
                int q=min(a,z);
                s+=(2*q)+q;
            }
            cout<<s<<endl;

      }



    }
