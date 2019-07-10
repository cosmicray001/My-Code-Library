// max sub array product
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
  int len, mx, mn, g, m, a;
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%d", &a), v.push_back(a), i++);
  mx = mn = g = m = v[0];
  for(int i = 1; i < v.size(); i++){
    mx = max(v[i], max(mx * v[i], mn * v[i]));
    mn = min(v[i], min(m * v[i], mn * v[i]));
    m = mx;
    g = max(g, mx);
  }
  cout << g << endl;
  return 0;
}
