#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    string s;
    int t,i,j,m,n,k,l;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.find("po")<=s.size()) cout<<"FILIPINO"<<endl;
        else if(s.find("mnida")<=s.size()) cout<<"KOREAN"<<endl;
        else if((s.find("desu")<=s.size()) || (s.find("masu")!=s.size())) cout<<"JAPANESE"<<endl;

    }
    see_you;

}
