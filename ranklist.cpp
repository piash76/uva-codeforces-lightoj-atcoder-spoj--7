    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main()
    {
    int n,i,k,ans;
    cin>>n;
    pair<int,int>a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i].first>>a[i].second;

    }
   sort(a,a+n);

    for(i=0;i<n;i++)
    {
    cout<<a[i].first<<" "<<a[i].second<<endl;

    }
    }
