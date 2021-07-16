#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

	int t;
	ll fact[22];
	ll x;

	fact[0] = 1;

	for (int i = 1; i <= 20; i++) {
		fact[i] = fact[i-1] * i;
	}

	cin>>t;

	for (int cs = 1; cs <= t; cs++) {
		cin>>x;
		stack <int> q;
		int i = 20;
		while(i >= 0) {
			if(fact[i] <=  x) {
				x -= fact[i];
				q.push(i);
			}

			i--;
		}

		if(x == 0) {
			printf("Case %d: ", cs);
			while(q.size() != 1) {
				printf("%d!+", q.top());
				q.pop();

			}

			printf("%d!\n", q.top());
			q.pop();

		}

		else {
			printf("Case %d: impossible\n", cs);
		}

	}


}
