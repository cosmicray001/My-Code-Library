#include <bits/stdc++.h>
#define le 12
using namespace std;
int in[le];
vector<int> v[le];
vector<int> ans;
void bfs(int n){
  priority_queue<int, vector<int>, greater<int> > q;
  for(int i = 1; i < n + 1; i++) if(in[i] == 0) q.push(i);
  while(!q.empty()){
    int p = q.top();
    q.pop();
    ans.push_back(p);
    for(int i = 0; i < v[p].size(); i++){
      int e = v[p][i];
      in[e]--;
      if(in[e] == 0) q.push(e);
    }
  }
}
int main(){
  //freopen("input.txt", "r", stdin);
  int n, m, a, b;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    in[b]++;
    v[a].push_back(b);
  }
  bfs(n);
  for(int i = 0; i < ans.size() - 1; i++) printf("%d ", ans[i]);
  printf("%d\n", ans[ans.size() - 1]);
  return 0;
}
