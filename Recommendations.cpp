




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =2000005;///1e6
ll a[maxn],t[maxn];


int main()
{


   // speed()

    ll i,j,cas=0;

    set<ll> s;
    ll n; scanf("%lld",&n);

    map<ll,vector<ll>> m;
    for(i=0;i<n;i++)
    {
       scanf("%lld",&a[i]);
        s.insert(a[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%lld",&t[i]);
    }

    for(i=0;i<n;i++) m[a[i]].push_back(t[i]);

    if(s.size()==n) printf("0\n");
    else
    {
        sort(a,a+n);

        priority_queue<ll> pq;
        ll ans=0,cur=0;

        for(i=0;i<n;i++)
        {
            if(a[i]<=cur) continue;
            cur=a[i];

            ll cst=0;

            while(1)
            {
                if(!m[cur].empty())
                {
                    for(j=0;j<m[cur].size();j++)
                    {
                        pq.push(m[cur][j]);
                        cst+=m[cur][j];
                    }
                }

                if(pq.empty()) break;

                cst-=pq.top();
                pq.pop();

                ans+=cst;

                cur++;
            }

        }




        printf("%lld\n",ans);

    }




}




