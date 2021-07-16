#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6;

char txt[maxn],pattern[maxn];
int n,m;
int lps[maxn];

void suffix()
{
    for(int i=0;i<=m;i++) lps[i]=0;

    int index=0;
    for(int i=1;i<=m;)
    {
        if(pattern[index]==pattern[i])
        {
        lps[i]=index+1;
        index++;i++;
        }
        else
        {
            if(index!=0) index=lps[index-1];
            else { lps[i]=index;i++; }
        }
    }

}

void kmp()
{
    int i=0,j=0,cnt=0;
    suffix();
    bool found=false;
    while(i<n)
    {
        if(txt[i]==pattern[j])
        {
            i++;j++;
        }
        else
        {
            if(j!=0) j=lps[j-1];
            else i++;
        }

        if(j==m)
        {
            //cout << "found match at : " << (i - m) << endl;
           // found=true;
           cnt++;
            j=lps[j-1];

        }
    }
    //if(!found) cout<<"NOT FOUND"<<endl;
    cout<<cnt<<endl;

}

int main()
{
    int T,a;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
    scanf("%s %s",txt,pattern);
    n=strlen(txt);m=strlen(pattern);
    kmp();



    //printf("Case %d: %d\n",a,kmp());
     }
return 0;
}

