#include <bits/stdc++.h>
#define l 1000000009
#define le 32004
// 32004
#define ll long long int
using namespace std;
int n[le >> 6];
vector<int> v;
#define ck(ve) (n[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (n[ve >> 6] |= (1 << ((ve >> 1) & 31)))
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!ck(i)) for(int j = i * i, k = i << 1; j < le; j += k) st(j);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!ck(i)) v.push_back(i);
}
void segse(ll a, ll b){
  bool arr[b - a + 1];
  memset(arr, true, sizeof(arr));
  if(a == 1) arr[0] = false;
  for(int i = 0; i < v.size() && v[i] * v[i] <= b; i++){
    ll base = (a / v[i]) * v[i];
    if(base < a) base += v[i];
    for(ll j = base; j <= b; j += v[i]) arr[j - a] = false;
    if(base == v[i]) arr[base - a] = true;
  }
  bool f = false;
  for(int i = 0; i < b - a + 1; i++){
    if(arr[i]) printf("%lld\n", i + a);
  }
}
int main(){
    se();
    int t, co = 0;
    ll a, b;
    for(scanf("%d", &t); t--; ){
      if(co++) printf("\n");
      scanf("%lld %lld", &a, &b);
      segse(a, b);
    }
    return 0;
}
