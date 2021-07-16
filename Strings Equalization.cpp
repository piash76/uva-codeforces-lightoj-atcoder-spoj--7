#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int ts,i,c,j;
    string s,t;
    char ch;
    cin>>ts;
    while(ts--)
    {
        c=0;
        cin>>s;
        cin>>t;
        for(i=0;i<s.size();i++)
        {
            for(j=0;j<t.size();j++)
            {

            if(s[i]==t[j])
            {
                c++;
            }
            }
        }
        if(c>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
