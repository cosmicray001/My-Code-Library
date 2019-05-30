#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector<int> v[le];
bool vis[le];
void dfs(int a){
  vis[a] = true;
  for(int i = 0; i < v[a].size(); i++){
    if(!vis[v[a][i]]) dfs(v[a][i]);
  }
}
int main(){
  int n, m,  a, b;
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int co = 0;
  for(int i = 0; i < n; i++){
    if(!vis[i]){
      dfs(i);
      co++;
    }
  }
  cout << co << endl;
  return 0;
}
