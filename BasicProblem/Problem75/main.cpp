#include <iostream>
using namespace std;

int log10( int n){
    if( n < 10){
        return 0;
    }
    return log10(n/10)+1;
}

int pow10( int n){
    if( n == 0 ){
        return 1;
    }
    return pow10(n-1)*10;
}

int soChuSo( int a, int n){
    if( n == 0 ){
        return 0;
    }
    if( n < 10 && n >= a){
        return 1;
    }
    int y = pow10(log10(n)), x = n / y ;
    int dem = x*soChuSo(a, y - 1);
    dem += soChuSo(a, n%y );
    if( x > a){
        dem += y;
    }
    if( x == a){
        dem += n - a*y + 1;
    }
    return dem;
}

int soChuSo0( int n ){
    if( n < 10 ){
        return 0;
    }
    int dem = n/10, i;
    int a = pow10(log10(n));
    for( i = 2; i <= log10(n); i++){
        int k = n / pow10(i);
        dem += min(n - k*pow10(i) + 1, pow10(i-1));
        dem += (k-1)*(pow10(i-1));
    }

    return dem;
}

int main()
{
    int a, b;
    while( cin >> a >> b && a > 0 && b > 0){
        int i;
        cout << soChuSo0(max(a,b)) - soChuSo0(min(a,b) - 1) << " ";
        for( i = 1; i < 10; i++){
            cout << soChuSo( i, max(a,b)) - soChuSo( i, min(a,b) - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
