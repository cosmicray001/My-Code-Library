#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector<int> v[le];
bool vis[le];
int dis[le];
void bfs(int a){
  vis[a] = true;
  dis[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i = 0; i < v[p].size(); i++){
      int ve = v[p][i];
      if(!vis[ve]){
        vis[ve] = true;
        dis[ve] = dis[p] + 1;
        q.push(ve);
      }
    }
  }
}
int main(){
  int n, m, a, b;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for(int i = 0; i < le; vis[i] = false, dis[i] = 0, i++);
  for(int i = 0; i < n; i++){
    if(!vis[i]) bfs(i);
  }
  return 0;
}
