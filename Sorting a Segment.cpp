
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;

#define ll long long

const int maxn = 211111;  ///2e5


ll a[maxn],b[maxn],cnt[maxn];
ll n,k;
ll tree1[4*maxn],tree2[4*maxn];  ///max min

void build1(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree1[node]=a[b];
        return;
    }
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    build1(left,b,mid);
    build1(right,mid+1,e);

   tree1[node]=max(tree1[left],tree1[right]);
}


ll query1(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return -1e18; ///out of range

    if (b >= i && e <= j) return tree1[node]; ///correct range  ///i --b--e--j
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    ll x=query1(left,b,mid,i,j);
    ll y=query1(right,mid+1,e,i,j);

    return max(x,y);

}


void build2(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree2[node]=a[b];
        return;
    }
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    build2(left,b,mid);
    build2(right,mid+1,e);

   tree2[node]=min(tree2[left],tree2[right]);
}


ll query2(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return 1e18; ///out of range

    if (b >= i && e <= j) return tree2[node]; ///correct range  ///i --b--e--j
    ll left=2*node;
    ll right=(2*node)+1;
    ll mid=(b+e)/2;
    ll x=query2(left,b,mid,i,j);
    ll y=query2(right,mid+1,e,i,j);

    return min(x,y);

}



int main()
{

    flash()
    ll i,j,t,cas=0;
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>a[i];
    build1(1,1,n);build2(1,1,n);

    for(i=2;i<=n;i++)
    {
        cnt[i]=cnt[i-1];
        if(a[i]<a[i-1]) {

         cnt[i]+=1;
        }


    }


    //for(i=1;i<=n;i++) cout<<cnt[i]<<" ";
    //cout<<endl;

    ll ans=0;

    bool f=false; ///false for non sorted.true for sorted

    for(i=1;i+k-1<=n;i++)
    {

        ll l=i;
        ll r=i+k-1;

        if(i==1)       ///first sub array
        {
            ans++;
            if(cnt[r]-cnt[l]==0)  f=true; ///sorted
            if(cnt[r]-cnt[l]>0) f=false;
            continue;

        }
        ll mx=query1(1,1,n,l-1,r);
        ll mn=query2(1,1,n,l-1,r);
        if(cnt[r]-cnt[l]==0) ///this time if i find any sorted subrray then if there had been a sorted sub array then counting will not occur
        {
            if(f==false) ///no sorted sub array present previous
            {
                ans++;
                f=true;
            }

        }
        else  ///for nonsorted
        {
            if(a[l-1]!=mn or a[r]!=mx)
            {
                //cout<<"YES "<<" I "<<i<<endl;
             ans++;
            }
        }



    }

    cout<<ans<<endl;




}



