#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, i, j;
    cin >> n;
    int a[n];
    for( i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }
    if( n <= 6 ){
        cout << -1;
        return 0;
    }
    for( i = 0; i < n-1; i++){
        for( j = 0; j < n-1; j++){
            if( a[j+1] > a[j] ){
                int change = a[j];
                a[j] = a[j+1];
                a[j+1] = change;
            }
        }
    }
    int kq = 0;
    while( a[0] + a[1] + a[2] >= (s+1)/2){
        s -= a[0];
        kq++;
        n--;
        for( i = 0; i < n; i++){
            a[i] = a[i+1];
        }
        if( n <= 6 ){
            cout << -1;
            return 0;
        }
    }
    cout << kq;
    return 0;
}
