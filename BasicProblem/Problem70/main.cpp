#include <iostream>

using namespace std;
bool kt[100001] ;
int main()
{
    int n, k, i;
    cin >> n >> k;
    int a[k];
    for( i = 1; i <= n; i++){
        kt[i] = true;
    }
    for( i = 0; i < k; i++){
        cin >> a[i];
        kt[a[i]] = false;
    }
    long long f[n];
    f[0] = 1;
    f[1] = kt[1];
    for( i = 2; i <= n; i++){
        if( kt[i] ){
            f[i] = (f[i-1]+f[i-2])%26051968;
        }else{
            f[i] = 0;
        }
    }
    cout << f[n];
    return 0;
}
