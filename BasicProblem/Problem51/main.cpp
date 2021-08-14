#include <iostream>

using namespace std;

int log2( int n){
    if( n == 1){
        return 0;
    }
    return log2(n/2)+1;
}

int pow2(int n){
    if( n == 0 ){
        return 1;
    }
    return pow2(n-1)*2;
}

int main()
{
    int n;
    cin >> n;
    int ma = n;
    while( n > 1 || n != pow2(log2(n)) ){
        if( n%2 == 0 ){
            n = n/2;
            continue;
        }
        n = 3*n+1;
        ma = max( ma, n);
    }
    cout << ma;
    return 0;
}
