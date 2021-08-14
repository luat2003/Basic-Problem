#include <iostream>

using namespace std;

int main()
{
    int n, countt = 0, i, j;
    cin >> n;
    int a[n];
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
    for( i = 0; i < n - 1; i++){
        for( j = i+1; j < n; j++){
            if( a[j] == a[i] ){
                countt++;
            }
        }
    }
    cout << countt << endl;
    for( i = 0; i < n - 1; i++){
        for( j = i+1; j < n; j++){
            if( a[j] == a[i] ){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    return 0;
}
