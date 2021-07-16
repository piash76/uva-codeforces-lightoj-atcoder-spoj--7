
for ( i = 2; i <=1000005; i++)
    {

        if (spf[i] == 0)
        {

            spf[i] = i;

            for ( j = 2*i; j <= 1000000; j += i)
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }

        }
    }


ll spd(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;

    // iterate from 3 to sqrt(n)
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}



	for(int i = 2; i*i < N; i++){
		if(spf[i] == i){
			for(int j = i*i; j < N; j += i) spf[j] = i;
		}
	}
