#include<bits/stdc++.h>
#define ll long long
#define inf 1e18
using namespace std;
vector<ll> g[200005];
vector<ll> cost[200005];
//map< pair<ll,ll>,ll >cost;
ll dis[200005];
//ll vis[200005];

void clean(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        g[i].clear();
        cost[i].clear();

    }
    //cost.clear();

}

void init(ll source,ll n)
{
    ll i,j;
    for(i=1;i<=n;i++) dis[i]=inf;

}


void Dijkstra(ll src,ll des)
{
  //  if(src==des) {dis[des]=dis[src]=0;return;}

    priority_queue< pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll> > > q; ///sorted ascending according to distance from the source
    q.push({0,src});  /// [distance from current node ,node]
    dis[src]=0;
//    vis[src]=1;
     int f=0;
    while(!q.empty())
    {

        ll u=q.top().second;  ///taking node
        q.pop();

        for(ll i=0;i<g[u].size();i++)
        {
            ll v=g[u][i];

            //ll cst=cost[{u,v}];
          ll cst=cost[u][i];
            if(dis[u]+cst<dis[v] )
            {
                dis[v]=dis[u]+cst;
                //path[v]=u;
                q.push({dis[v],v});

            }


        }

    }

}

int main()
{

    ll t,i,j;
    char name[20],s1[20],s2[20];
    scanf("%lld",&t);
    while(t--)
    {
        map<string,ll> city;

        ll n;
        scanf("%lld",&n);

        clean(n);

        for(i=1;i<=n;i++)
        {
            scanf("%s",name);
            city[name]=i;

            ll m;
            scanf("%lld",&m);

            for(j=1;j<=m;j++)
            {
                ll node,cst;
                scanf("%lld %lld",&node,&cst);
                g[i].push_back(node);
                cost[i].push_back(cst);
                //cost[{i,node}]=cst;
            }
        }

        ll r;
        scanf("%lld",&r);

        for(i=1;i<=r;i++)
        {
            scanf("%s %s",&s1,&s2);
            init(city[s1],n);
            Dijkstra(city[s1],city[s2]);
            printf("%lld\n",dis[city[s2]]);

        }




    }
   return 0;
}
