#include <iostream>

using namespace std;

int soDauTien( int n ){
    if( n == 1){
        return 1;
    }
    int i;
    for( i = soDauTien(n-1)+(n-2)*(n-1)+1; ; i++ ){
        if( i % n == 0){
            return i;
        }
    }
}

int main()
{
    int n, i;
    cin >> n;
    if( n == 1){
        cout << 1;
        return 0;
    }
    for(i = 1; ; i++){
        if( i*(i+1)/2 >= n){
            break;
        }
    }
    cout << soDauTien(i)+(n-(i-1)*i/2 - 1)*i;
    return 0;
}
