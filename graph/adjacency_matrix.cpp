#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le][le];
int main(){
  int c, r;
  scanf("%d %d", &r, &c);
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      scanf("%d", &n[i][j]);
    }
  }
}
