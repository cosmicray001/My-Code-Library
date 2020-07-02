#include <bits/stdc++.h>
#define le 10002
using namespace std;
int len, n[le];
int main(){
  scanf("%d", &len);
  for(int i = 0; i < len; scanf("%d", &n[i]), i++);
  int ct = pow(2, len);
  for(int i = 0; i < ct; i++){
    for(int j = 0; j < len; j++){
      if((i & (1 << j)) > 0) printf("%d ", n[j]);
    }
    printf("\n");
  }
  return 0;
}
