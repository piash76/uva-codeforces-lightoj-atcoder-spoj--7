int sti(string s) {

    int ans = 0;
    int p = 1;

    for (int i = s.size() - 1; i >= 0; i--) {
        ans = (ans + ((ll)(s[i] - '0') * p) % mod) % mod;
        p = (p * 10) % mod;
    }
    return ans;

}
r=0;
for(i=0;i<n;i++)
        r=r*10+s[i]-'0';
