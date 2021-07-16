


ll product_sum(ll n)
{
    ll suff[n+5];
    suff[n-1]=a[n-1];

    for(ll i=n-2;i>=0;i--)
    {
        suff[i]=suff[i+1]+a[i];
    }

    ll sum=0;
    for(ll i=0;i<n-1;i++)
    {
        sum+=(a[i]*suff[i+1]);
    }

    return sum;
}




    // C - Sum of product of pairs
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
    	int N; cin>>N;
    	int MOD = (1e9) + 7;
    	int64_t ans = 0, b = 0;
    	for(int i=0; i<N; ++i){
    		int a; cin>>a;
    		ans += a * b % MOD;
    		b += a;
    		b %= MOD;
    	}
    	cout<< ans % MOD <<endl;
    }
