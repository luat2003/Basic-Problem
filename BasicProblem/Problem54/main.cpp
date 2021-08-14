#include <iostream>

using namespace std;

int tongChuSo( int n){
    if( n < 10 ){
        return n;
    }
    return tongChuSo(n/10) + n%10;
}

long matMa( int n){
    return n+tongChuSo(n);
}

int main()
{
    int n, i;
    cin >> n;
    for( i = n-72; ; i++){
        if( matMa(i) == n){
            cout << i;
            return 0;
        }
    }
    return 0;
}
