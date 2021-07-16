#include<bits/stdc++.h>
using namespace std;

int mod(string num, int a)
{

    int res = 0;


    for (int i = 0; i < num.length(); i++)
         res = (res*10 + (int)num[i]-'0') %a;

    return res;
}
int main()
{
    string a;
    int n,r;
    cin>>a>>n;
    r=mod(a,n);
    cout<<r<<endl;
}
