#include <bits/stdc++.h>
#define le 1003
using namespace std;
int n[le], len;
vector<int> v;
void fnc(int i){
  if(i == len){
    for(int j = 0; j < v.size(); j++) printf("%d ", v[j]);
    printf("\n");
    return;
  }
  fnc(i + 1);
  v.push_back(n[i]);
  fnc(i + 1);
  v.pop_back();
}
int main(){
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%d", &n[i]), i++);
  fnc(0);
  return 0;
}
