#include <iostream>

using namespace std;

long long pow2( int n ){
    if( n == 0){
        return 1;
    }
    return pow2(n-1)*2;
}

int log2( long long n){
    if( n == 1){
        return 0;
    }
    return log2(n/2) +1;
}

int main()
{
    long long x;
    cin >> x;
    int i, j, k, l;
    long long s[log2(x)+2];
    s[0] = 0;
    for( i = 1; i <= log2(x)+1; i++){
        s[i] = x % pow2(i);
    }
    long long a[log2(x)+2][log2(x)+2];
    for( i = 1; i <= log2(x)+1; i++){
        for( j = i; j <= log2(x)+1; j++){
            a[i][j] = (s[j]-s[i-1])/pow2(i-1);
        }
    }

    long long tong = 0;
    for( i = 1; i <= log2(x)+1; i++){
        for( j = i; j <= log2(x)+1; j++){
            int countt = 0;
            for( k = 1; k <= i; k++){
                for( l = k; l <= j, l+k<i+j ; l++){
                    if( a[k][l] == a[i][j]){
                        countt = 1;
                        break;
                    }
                }
                if( countt == 1 ){
                    break;
                }
            }
            if( countt == 0 ){
                tong += a[i][j];
            }
        }
    }
    cout << tong;
    return 0;
}
