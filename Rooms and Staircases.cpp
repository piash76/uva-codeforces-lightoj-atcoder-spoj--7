#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int i,j,k,t,n,p,z;
    string s;
    cin>>t;
    while(t--)
    {
        p=0,z=0;
        cin>>n;
        cin>>s;
        int x=s.find('1');
        int y=s.rfind('1');
        if(x==-1) cout<<n<<endl;
        else if(x==0 || x==n-1)
        {
            cout<<2*n<<endl;
        }
        else
        {
            cout<<max(n-x,y+1)*2<<endl;
        }


    }
}
