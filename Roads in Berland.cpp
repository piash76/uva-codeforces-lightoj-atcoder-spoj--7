    #include<bits/stdc++.h>
    #pragma Ofast
    using namespace std;
    int main()
    {
        long long sum=0;

    long long k,i,n,t,a,b,m,j,x,c,y,d[305][305];
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
    scanf("%lld",&d[i][j]);
    }
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
    scanf("%lld %lld %lld",&a,&b,&c);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
       d[i][j]=min(d[i][j],min(d[i][a]+c+d[b][j],d[i][b]+c+d[a][j]));
       sum=sum+d[i][j];
    }
    printf("%lld ",sum/2);
    }
    }
