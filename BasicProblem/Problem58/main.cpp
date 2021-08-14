#include <iostream>

using namespace std;

int gcd( int x, int y){
    if( y == 0){
        return x;
    }
    return gcd(y, x%y);
}

int main()
{
    int a, b, c, d, v;
    cin >> a >> b >> c >> d >> v;
    if( a - v*c == 0 ){
        if( v*d - b == 0 ){
            cout << "MULTIPLE";
            return 0;
        }else{
            cout << "NONE";
            return 0;
        }
    }
    if( v*d - b == 0 ){
        cout << "NONE";
        return 0;
    }
    if( (v*d - b) % ( a - v*c) == 0 ){
        cout << "NONE";
        return 0;
    }

    cout << (v*d-b)*((a-v*c)/abs(a-v*c))/gcd( abs(v*d-b), abs(a - v*c)) << "/" << abs(a-v*c)/gcd( abs(v*d-b), abs(a - v*c));
    return 0;
}
