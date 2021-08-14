#include <iostream>
#include <math.h>
using namespace std;

int demSoBuoc( int n ){
    if( n <= 3 ){
        return n;
    }
    int a = sqrt(n);
    if( a*a == n ){
        return 2*a-1;
    }
    if( n > a*a && n <= a*(a+1) ){
        return 2*a;
    }
    if( n > a*(a+1) ){
        return 2*a+1;
    }
}

int main()
{
    int a, b;
    while( cin >> a >> b ){
        cout << demSoBuoc( b - a ) << endl;
        return 0;
    }
    return 0;
}
