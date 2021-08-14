#include <iostream>
#include <math.h>
using namespace std;

int dayVoHan( long long n ){
    if( n == 1 || n == 2){
        return n-1;
    }
    long long a = -1, c = n, i, d = 1;
    while( c>0 ){
        a++;
        c = c/2;
    }
    for( i = 1; i <= a; i++ ){
        d = d*2;
    }
    long long b = n-d;
    if( b == 0 ){
        return a%3;
    }
    return (dayVoHan(b)+1)%3;
}

int main()
{
    long long n;
    while( cin >> n ){
        cout << dayVoHan(n) << endl;
    }
    return 0;
}
