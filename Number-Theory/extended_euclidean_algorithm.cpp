#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int egcd(int a, int b, int &x, int &y){
  if(a == 0){
    x = 0;
    y = 1;
    return b;
  }
  int x1, y1;
  int g = egcd(b % a, a, x1, y1);
  x = y1 - (b / a) * x1;
  y = x1;
  return g;
}
int main(){
  int a, b, g, x, y;
  while(scanf("%d %d", &a, &b) != EOF && (a || b)){
    g = egcd(a, b, x, y);
    printf("%d %d %d\n", g, x, y);
  }
  return 0;
}
