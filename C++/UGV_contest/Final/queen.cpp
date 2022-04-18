
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct edgee {
    int x;
    int y;
    int z;
    edgee() {}
    edgee(int x, int y, int z): x(x), y(y), z(z) {}
}es[42000];
const int MAX = 0x3fffffff;
int estop;
vector <int> adjs[210];
int cur[210];
int dis[210];
int n,m;
int s,t;

void addedge (int u, int v, int c)
{
    adjs[u].push_back(estop);
    es[estop++] = edgee(u,v,c);
    adjs[v].push_back(estop);
    es[estop++] = edgee(v,u,0);
}

bool BFS()
{
    int q[210];
    memset(dis,-1,sizeof(dis));
    int ge=0,ed=1;
    q[0] = s;
    dis[s] = 0;
    while (ge < ed)
    {
        int l = adjs[q[ge]].size();
        for (int i=0;i<l;i++)
        {
            edgee e = es[adjs[q[ge]][i]];
            if (e.z > 0 && dis[e.y] == -1)
            {
                dis[e.y] = dis[q[ge]] + 1;
                q[ed++] = e.y;
            }
        }
        ge++;
    }
    return (dis[t] != -1);
}

int dinic(int x, int maxflow)
{
    if (x==t)
        return maxflow;
    int l = adjs[x].size();
    for (int i = cur[x]; i<l; i++)
    {
        cur[x] = i;
        edgee &e = es[adjs[x][i]];
        if (dis[e.y] == dis[x]+1 && e.z > 0)
        {
            int f = dinic(e.y, min(maxflow,e.z));
            if (f)
            {
                e.z -= f;
                es[adjs[x][i]^1].z += f;
                return f;
            }
        }
    }
    return 0;
}

int dinic_main()
{
    int F = 0;
    while (BFS())
    {
        int f;
        memset(cur,0,sizeof(cur));
        while (1)
        {
            f = dinic(s,MAX);
            if (f==0)
                break;
            F += f;
        }
    }
    return F;
}
int main()
{
    int tt;
    scanf("%d",&tt);

    while(tt--)
    {
        int T;
        scanf("%d %d %d",&n,&T,&m);

        estop = 0;
        s = 0;
        t = 2*n+1;
        for (int i=0;i<=2*n+1;i++)
            adjs[i].clear();
        for (int i=0;i<m;i++)
        {
            int a,b;
            scanf("%d %d", &a, &b);
            addedge(2*a-1,2*b,1);
            addedge(2*b-1,2*a,1);
        }
        for (int i=0;i<n;i++)
        {
            addedge(0,2*i+1,T);
            addedge(2*i+2,2*n+1,1);
        }
        printf("%d\n",dinic_main());
    }
    return 0;
}
