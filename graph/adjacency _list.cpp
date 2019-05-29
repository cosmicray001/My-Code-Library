#include <bits/stdc++.h>
#define le 10004
using namespace std;
vector<int> v[le];
int main(){
  int n, m, a, b;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++){
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for(int i = 0; i < n; i++){
    printf("%d ::", i);
    for(int j = 0; j < v[i].size(); j++){
      printf(" %d", v[i][j]);
    }
    printf("\n");
  }
  return 0;
}
