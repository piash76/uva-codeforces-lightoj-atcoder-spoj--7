#include<bits/stdc++.h>
using namespace std;

char gp[1005][1005];
int n;

void dfs(int x,int y)
{
    if(x<0 || y<0 || x==n || y==n) return;
    if(gp[x][y]!='1') return;
    if(gp[x][y]=='1') gp[x][y]='0';
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x+1,y+1);
    dfs(x+1,y-1);
    dfs(x-1,y+1);
    dfs(x-1,y-1);

}

int main()
{
    int c,i,j,cas=0;
    string s;
    while(cin>>n)
    {

       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>gp[i][j];
           }
       }
       c=0;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
              if(gp[i][j]=='1')
              {
                  c++;
                  dfs(i,j);
              }
           }
       }
       printf("Image number %d contains %d war eagles.\n",++cas,c);
    }
}
