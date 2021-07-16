


    ll cnt[n+10]={};


    for(i=1;i<=q;i++)
    {
        ll x,y;
        cin>>x>>y;

        cnt[x]++;
        cnt[y+1]--;


    }
