#include <iostream>
#include <math.h>
using namespace std;

int tongCacChuSo( int n ){
    if( n < 10 ){
        return n;
    }
    return tongCacChuSo(n/10) + n%10;
}

int tongUoc( int n ){
    int s = 0, i, a = sqrt(n);
    for( i = 1; i < sqrt(n) ; i++){
        if( n % i == 0 ){
            s += tongCacChuSo(i) + tongCacChuSo(n/i) ;
        }
    }
    if( a*a == n ){
        s += tongCacChuSo(a);
    }
    return s;
}

int main()
{
    int x, a = 1;
    cin >> x;
    while( tongUoc(x) != x && a < 1000 ){
        a++;
        x = tongUoc(x);
    }
    cout << a;
    return 0;
}
