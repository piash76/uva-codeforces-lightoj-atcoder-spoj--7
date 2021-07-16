

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=200009;

ll a[M],b[M];
ll prefmx[M],prefmn[M],sufmx[M],sufmn[M];



int main()
{



    ll t,i,j;
    scanf("%lld",&t);

    while(t--)
    {
        ll n,m;scanf("%lld %lld",&n,&m);

        for(i=0;i<=n+10;i++)
        {
            prefmx[i]=prefmn[i]=sufmx[i]=sufmn[i]=0;
        }

        string s;
        cin>>s;

        a[0]=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='+') a[i+1]=a[i]+1;
            else a[i+1]=a[i]-1;
        }




        prefmx[0]=0;
        prefmn[0]=0;
        for(i=1;i<=n;i++)
        {
            prefmx[i]=max(prefmx[i-1],a[i]);
            prefmn[i]=min(prefmn[i-1],a[i]);
        }

        sufmx[n+1]=LLONG_MIN;
        sufmn[n+1]=LLONG_MAX;

        for(i=n;i>=1;i--)
        {
            sufmx[i]=max(sufmx[i+1],a[i]);
            sufmn[i]=min(sufmn[i+1],a[i]);

        }


        //for(i=0;i<=n;i++) cout<<prefmx[i]<<" "<<prefmn[i]<<endl;
       // cout<<endl;


       //  for(i=0;i<=n;i++) cout<<sufmx[i]<<" "<<sufmn[i]<<endl;
       // cout<<endl;





        while(m--)
        {
            ll l,r;scanf("%lld %lld",&l,&r);

            ll mx=0,mn=0;
            mx=max(prefmx[l-1],mx);
            mn=min(prefmn[l-1],mn);

            //cout<<"MX1 "<<mx<<" MN1 "<<mn<<endl;

            ll chnge=a[r]-a[l-1];
            chnge*=-1;

          //  cout<<"CHANGE  "<<chnge<<endl;

            ll mx2,mn2;
            if(r+1<=n) mx2=sufmx[r+1]+chnge;
            else mx2=0;

            if(r+1<=n) mn2=sufmn[r+1]+chnge;
            else mn2=0;

           // cout<<"MX2 "<<mx2<<" MN2 "<<mn2<<endl;


            mx=max(mx,mx2);
            mn=min(mn,mn2);



            ll ans=(mx-mn)+1;
            printf("%lld\n",ans);


      }


    }
    return 0;

}





