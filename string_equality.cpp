


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long


using namespace std;




const int mod = 1000000007;
const int maxn = 311111;
//ll a[maxn],b[maxn];
int ar[30],br[30];

int main()
{
    speed()

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        for(i=0;i<26;i++) { ar[i]=0;br[i]=0; }

        ll n,k;cin>>n>>k;
        string a,b;cin>>a>>b;

        bool f=true;

        sort(a.begin(),a.end());sort(b.begin(),b.end());


        for(i=0;i<n;i++) ar[a[i]-'a']++;
        for(i=0;i<n;i++) br[b[i]-'a']++;


        for(i=0;i<26;i++)   ///deleting the possible matching ones
        {
            ll x=min(ar[i],br[i]);
            ar[i]-=x;
            br[i]-=x;
        }

        for(i=0;i<26;i++)
        {
            if(ar[i]%k!=0) {f=false;break;}
            for(j=i+1;j<26;j++)
            {
                if(br[j]%k==0 and ar[i]!=0)
                {
                    ll x=min(ar[i],br[j]);
                    ar[i]-=x;
                    br[j]-=x;
                }
            }
        }




        for(i=0;i<26;i++)
        {
            if(ar[i]) {f=false;break;}

        }







        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;




    }

}

