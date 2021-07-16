    #include<bits/stdc++.h>
    using namespace std;

    int main(){
         int n,k;
         cin>>n>>k;
         int a[n];
         int s,t;
         for(int i=0;i<n;i++){
              cin>>s>>t;
              a[i]=s*60-t;
         }
         sort(a,a+n);
         cout<<count(a,a+n,a[n-k]);
    }
