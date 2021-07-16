#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,i,j,s=0,p,x,k;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];

    }



   sort(a,a+n,greater<int>());
    for(i=0;i<n;i++)
    {
        s+=(a[i]*i)+1;
    }
    cout<<s<<endl;

    for(i=0;i<n;i++)
    {
        x=a[i];
        for(j=0;j<n;j++)
        {
            if(x==b[j])
            {
                b[j]=-1;
                cout<<j+1<<" ";
                break;
            }
        }
    }


}
