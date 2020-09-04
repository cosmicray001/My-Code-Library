#include <bits/stdc++.h>
#define le 1003
using namespace std;
int len;
int arr[le];
int part(int lo, int hi){
    int pi = arr[hi], i = lo - 1;
    for(int j = lo; j < hi; j++){
        if(arr[j] < pi) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[hi]);
    return i;
}
void quick_sort(int lo, int hi){
    if(lo >= hi) return;
    int p = part(lo, hi);
    quick_sort(lo, p - 1);
    quick_sort(p + 1, hi);
}
int main(){
    scanf("%d", &len);
    for(int i = 0; i < len; i++) scanf("%d", &arr[i]);
    quick_sort(0, len - 1);
    for(int i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
