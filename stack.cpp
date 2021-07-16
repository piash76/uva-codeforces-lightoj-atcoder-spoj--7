#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        cin>>n;
        s.push(n);
    }
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;

    stack<int>p,q;

    for(i=1;i<=5;i++)
    {
        cin>>n;
        p.push(n);
    }
    for(i=1;i<=5;i++)
    {
        cin>>n;
        q.push(n);
    }

    p.swap(q);
    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }


    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }

}
