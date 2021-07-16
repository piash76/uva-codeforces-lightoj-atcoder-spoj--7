#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char a='z';
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<=a)
        {
            cout<<"Mike"<<endl;
            //cout<<"Ann"<<endl;

        }
        else
        {
            cout<<"Ann"<<endl;
            //cout<<"Mike"<<endl;
        }
        a=min(a,s[i]);
    }
}
