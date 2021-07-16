#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,a,b,c,d,e,f,g,h,sw,sd;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>sw>>sd>>a>>b>>c>>d>>e>>f>>g;
        printf("Case %d: %d\n",i,sw-(a+b+c+d+e+f+g));
    }
}
