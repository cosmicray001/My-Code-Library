#include <bits/stdc++.h>
#define le 11
using namespace std;
vector<int> v[le];
vector<int> ans;
bool vis[le];
void dfs(int a){
    vis[a] = true;
    for(int i = 0; i < v[a].size(); i++){
        int e = v[a][i];
        if(!vis[e]) dfs(e);
    }
    ans.push_back(a);
}
int main(){
    freopen("input.txt", "r", stdin);
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
    }
    for(int i = 1; i < n + 1; i++){
        if(!vis[i]) dfs(i);
    }
    for(int i = ans.size() - 1; i > 0; i--) printf("%d ", ans[i]);
    printf("%d\n", ans[0]);
    return 0;
}
