#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int a[2*n], s[2*n];
    for( i = 0; i < n; i++){
        cin >> a[i];
        a[i+n] = a[i];
    }
    s[0] = 0;
    for( i = 0; i <= 2*n-1; i++){
        s[i+1] = s[i] + a[i];
    }
    int mi = 99999999;
    for( i = 0; i < n; i++){
        for( j = i+1; j < n+i; j++){
            mi = min(mi, s[j+1]-s[i]);
        }
    }
    cout << mi;
    return 0;
}
