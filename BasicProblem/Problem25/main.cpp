#include <iostream>

using namespace std;

int gcd( int x, int y ){
    if( y == 0 ){
        return x;
    }else{
        gcd(y, x%y);
    }
}
int lcm( int x, int y){
    return x*y/gcd(x,y);
}

int main()
{
    int n, p, q, r;
    while( cin >> n >> p >> q >> r ){
        int a = lcm(p,q), b = lcm(q,r), c = lcm(r,p), d = lcm(a,r);
        int countt = n/a + n/b + n/c - 3*(n/d);
        cout << countt << endl;
    }
    return 0;
}
