    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    int main()

    {
    	ll n,i,j,k,x;
    	deque<int> d;
    	set<int> s;
    	cin >> n >> k;
    	for(i=1;i<=n;i++)
        {
            cin>>x;
            if(s.count(x)==0)
            {
               s.insert(x);
                d.push_front(x);
                if(d.size()>k)
                {
                   s.erase(d[k]);
                   d.pop_back();
                }
            }
        }
        cout<<d.size()<<endl;
        for(i=0; i<d.size(); i++)
        {
    		cout << d[i] << ' ';
    	}
    	cout << endl;




   }
