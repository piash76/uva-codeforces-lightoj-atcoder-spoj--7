#include<bits/stdc++.h>

using namespace std;

int graph[25][25],vis[25],level[25],src,trgt;

void bfs()
{
    queue<int>q;

    vis[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=1;i<=20;i++)
        {
           if(graph[u][i]==1 && vis[i]!=1)
           {
               vis[i]=1;
               level[i]=level[u]+1;
               q.push(i);
           }
        }





    }


}


int main()
{
    int n,i,j,l,x,y,src,trgt,ts,cas=1,s=1;

    while(scanf("%d",&x)==1)
    {
       for(i=1;i<=x;i++)
       {
           scanf("%d",&x);
           graph[s][x]=1;
           graph[x][s]=1;
       }
       s++;
       if(s==20)
       {
           s=1;
           scanf("%d",&ts);
           printf("Test Set #%d\n",cas++);
           while(ts--)
           {
               scanf("%d %d",&src,&trgt);
               bfs();
               printf("%2d to %2d: %d\n",src,trgt,level[trgt]);
               memset(vis,0,sizeof(vis));
               memset(level,0,sizeof(level));

           }
           cout<<endl;
           memset(graph,0,sizeof(graph));

       }



    }
    return 0;
}
