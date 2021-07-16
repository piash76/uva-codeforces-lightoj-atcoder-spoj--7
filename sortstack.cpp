#include<bits/stdc++.h>
using namespace std;

stack<int> sorted(stack<int>s)
{
    stack<int> p;
    int temp;
    while(!s.empty())
    {
        temp=s.top();
        s.pop();
        while(!p.empty() && temp<p.top())
        {
            s.push(p.top());
            p.pop();
        }
        p.push(temp);
    }

    return p;

}

int main()
{
    stack<int>s,so;
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        cin>>n;
        s.push(n);
    }
    so=sorted(s);
    while(!so.empty())
    {
        cout<<so.top()<<endl;
        so.pop();
    }

}
