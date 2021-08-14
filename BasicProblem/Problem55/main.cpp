#include <iostream>

using namespace std;

int gcd( int x, int y){
    if( y == 0 ){
        return x;
    }
    return gcd(y, x%y);
}

int main()
{
    int n, i;
    cin >> n;
    if( n%2 == 1 ){
        cout << (n-1)/2 << "/" << (n-1)/2 +1;
        return 0;
    }
    if( n%2 == 0){
        i = 1;
        while( gcd( n/2 - i, n/2 +i ) != 1){
            i++;
        }
        cout << n/2 - i << "/" << n/2 + i;
    }
    return 0;
}
