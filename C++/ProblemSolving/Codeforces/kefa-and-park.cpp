#include<cstdio>
#include<algorithm>
#include<bitset>
#include<vector>
using namespace std;


const int MAXN = 1e5 + 3;

int m;
bitset<MAXN> Cathas;
vector<vector<int>> adjList;
int ans, maxx[MAXN] = {0}, curr[MAXN] = {0};

void dfs(int u, int par = 0)
{
    if(Cathas[u])
    curr[u] = 1 + ((Cathas[par])? curr[par]: 0);
    else
    curr[u] = 0;

    maxx[u]= max(curr[u], maxx[par]);
    bool isleaf = true;

    for(auto &v : adjList[u]){
        if(v != par){
            dfs(v, u);
            isleaf = false;
        }
    }
    if(isleaf and maxx[u] <= m) ++ ans;

};


int main(){
    int n;
    scanf("%d %d", &n, &m);
    int temp;
    for (int i=1; i<=n; ++i){
        scanf("%d", &temp);
        Cathas[i] = temp;
    }
    adjList.resize(n+3);
    int u, v;
    for (int i=1; i<n; ++i){
       scanf("%d %d", &u, &v);
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    ans = 0;
    dfs(1);

    printf("%d\n", ans);

    return 0;
}
