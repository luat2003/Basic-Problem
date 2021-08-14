#include <iostream>

using namespace std;

int gcd( int x, int y){
    if( y == 0 ){
        return x;
    }
    return gcd( y, x%y);
}

int reversible( int n ){
    int re = 0;
    while( n > 0){
        re = re*10 + n%10;
        n = n/10;
    }
    return re;
}

int main()
{
    int a, b, i, countt = 0;
    cin >> a >> b;
    for( i = a; i <= b; i++){
        if( gcd(i, reversible(i) ) == 1 ){
            countt++;
        }
    }
    cout << countt;
    return 0;
}
