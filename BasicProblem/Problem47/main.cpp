#include <iostream>

using namespace std;

int tongCacChuSo( int n ){
    if( n < 10 ){
        return n;
    }
    return tongCacChuSo(n/10) + n%10;
}

int soTotHon( int a, int b ){
    if( tongCacChuSo(a) > tongCacChuSo(b) ){
        return a;
    }
    if( tongCacChuSo(a) < tongCacChuSo(b) ){
        return b;
    }
    if( tongCacChuSo(a) == tongCacChuSo(b) ){
        return min(a,b);
    }
}
bool kt[100000];
int main()
{
    int n, ma = 0, a = 0, i;
    cin >> n;
    for( i = 1; i <= n; i++){
        kt[i] = false;
        if( n % i == 0 ){
            if( soTotHon(i,a) == i ){
                kt[i] = true;
                kt[a] = false;
                a = i;
            }
        }
    }
    for( i = 1; i <= n; i++){
        if( kt[i] == true ){
            cout << i;
            return 0;
        }
    }
    return 0;
}
