#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,i,j,l=0;
    cin>>n>>k;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>l)l=a[i];

    }

    if(k%2==0 && k>0)k=2;
    else if(k==0)k=0;
    else k=1;

    for(j=1;j<=k;j++)
    {
        for(i=0;i<n;i++)
        {
            a[i]=l-a[i];
        }
        l=0;
        for(i=0;i<n;i++)
        {
            if(l<a[i])l=a[i];
        }
    }

    for(i=0;i<n;i++)
        {
           cout<<a[i]<<" ";
        }
}
