int m;
int fnc(int a, int b){
    if(b == 0) return 1 % m;
    if(b % 2 == 0){
        int rt = fnc(a, b / 2);
        return ((rt % m) * (rt % m) % m);
    }
    return ((a % m) * fnc(a, b - 1) % m) % m;
}
