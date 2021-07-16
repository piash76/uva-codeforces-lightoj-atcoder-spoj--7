#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    int t,j,v,s,e,f,i,x,y,z;
    cin>>t>>s>>v>>j>>e>>f;
    int r=min(t,min(s,min(v,j)));
    if(r==j) cout<<r*max(e,f)<<endl;
    else
    {
        if(f>e)
        {
            int y=min(v,min(s,j));
            cout<<y*f+min(t,(j-y))*e<<endl;
        }
        else
        {
            int z=min(t,j);
            cout<<z*e+min(v,min(s,(j-z)))*f<<endl;
        }
    }
   see_you;





}
