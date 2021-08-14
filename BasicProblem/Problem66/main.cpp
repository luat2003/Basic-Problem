#include <iostream>

using namespace std;

int main()
{
    long long n, m, i, j;
    cin >> n >> m;
    long long a[m+1];
    a[0] = 0;
    for( i = 1; i <= m; i++){
        cin >> a[i];
    }
    for( i = 1; i <= m - 1; i++){
        for( j = 1; j <= m - 1; j++){
            if( a[j] > a[j+1] ){
                long long change = a[j];
                a[j] = a[j+1];
                a[j+1] = change;
            }
        }
    }
    long long ma = 0;
    for( i = 1; i <= m; i++){
        if( a[i] > a[i-1] ){
            if ( n > m-i+1 ){
                ma = max(ma, a[i]*(m-i+1));
            }else{
                ma = max( ma, a[i]*n);
            }
        }
    }
    cout << ma;
    return 0;
}
