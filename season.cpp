#include <bits/stdc++.h>
#define sc scanf
#define pf printf
typedef long long ll;
using namespace std;


void dfs(int i,int j);
vector<string>v;
int n,cas=0;
bool check[101][101];

int x[]= {-1,-1,-1,0,0,1,1,1};
int y[]= {-1,0,1,-1,1,-1,0,1};

int main()
{
    while(sc("%d",&n)==1)
    {
        v.clear();
        memset(check,0,sizeof(check));
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        int cn=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(check[i][j]==0)
                {
                    check[i][j]=1;
                    if(v[i][j]=='1')
                    {
                        cn++;
                        dfs(i,j);
                    }

                }
            }
        }
        pf("Image number %d contains %d war eagles.\n",++cas,cn);

    }

    return 0;
}

void dfs(int r,int c)
{

    check[r][c]=1;

    for(int i=0; i<8; i++)
    {
        int I=r+x[i];
        int J=c+y[i];
        if(((I>=0&&I<n)&&(J>=0&&J<n))&&check[I][J]==0)
        {
            check[I][J]=1;
            if(v[I][J]=='1')  dfs(I,J);
        }


    }
}
