#include <iostream>
#include <math.h>
using namespace std;

int timSoCacSo( int n ){
    int s = sqrt( (long long)8*n+1);
    return (s-1)/2;
}

int main()
{
    int n, i;
    cin >> n;
    cout << n << "=";
    int c = timSoCacSo(n);
    int a = n - c*(c+1)/2;
    while( a%c != 0 ){
        c--;
        a = n - c*(c+1)/2;
    }
    if( c == 1){
        cout << n;
        return 0;
    }
    cout << 1+a/c << "+...+" << c+a/c;
    return 0;
}
