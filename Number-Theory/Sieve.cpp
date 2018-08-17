#include <bits/stdc++.h>
#define le 100000008
using namespace std;
bool n[le >> 1];
vector<int> v;
// 1, 2 && even numbers have to handel carefully
void se(){  // don't forget to call this fnc :)
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!n[i >> 1]) for(int j = i * i, k = i << 1; j < le; j += k) n[j >> 1] = 1;
}

int main(){
    se();
    // test print
    for(int i = 3; i < 33; i += 2) if(!n[i >> 1]) printf("%d\n", i);
    return 0;
}
