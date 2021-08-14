#include <iostream>

using namespace std;
bool kt[100001];
int main()
{
    int n, i, j;
    cin >> n;
    for( i = 1; i <= n; i++){
        kt[i] = true;
    }
    int a[n+1];
    a[0] = 0;
    for( i = 1; i <= n; i++){
        cin >> a[i];
        kt[a[i]] = false;
        if( a[i] < a[i-1] ){
            int ktra = 0;
            for( j = 1; j <= i-1; j++){
                if( a[j] == a[i] + 1){
                    ktra = 1;
                    break;
                }
            }
            if( ktra == 0){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
