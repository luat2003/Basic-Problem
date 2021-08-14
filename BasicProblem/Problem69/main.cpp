#include <iostream>
#include <math.h>
using namespace std;

int tongUocSo( int n){
    if( n == 1 ){
        return 0;
    }
    int a = sqrt(n), tong = 1, i;
    for( i = 2; i < sqrt(n); i++){
        if( n % i == 0 ){
            tong += i + n/i;
        }
    }
    if( n == a*a ){
        tong += a;
    }
    return tong;
}

bool ktSoPhongPhu( int n ){
    if( tongUocSo(n) > n ){
        return true;
    }
    return false;
}

int main()
{
    int l, r, i, countt = 0;
    cin >> l >> r;
    for( i = l; i <= r; i++){
        if( ktSoPhongPhu(i) ){
            countt++;
        }
    }
    cout << countt;
    return 0;
}
