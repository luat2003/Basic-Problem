#include <iostream>

using namespace std;

int pow2( int k){
    if( k == 0 ){
        return 1;
    }
    return pow2( k - 1 ) * 2;
}

int main()
{
    int k, n;
    cin >> k >> n;
    if( n == 1 ){
        cout << 1;
        return 0;
    }
    if( n == 2 ){
        cout << pow2(k);
        return 0;
    }
    int i = k, column = n, row = 1;
    while( i >= 1 ){
        i--;
        if( column > pow2(i) && column < pow2(k)+1-2* (pow2(k-i-1)/2) ){
            column = pow2(i+1) + 1 - column;
            row = pow2(k-i)+1 - row;
        }
    }
    cout << row;
    return 0;
}
