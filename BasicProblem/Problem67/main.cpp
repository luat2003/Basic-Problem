#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
    for( i = 0; i < n - 1; i++){
        for( j = 0; j < n - 1; j++){
            if( a[j] > a[j+1] ){
                int change = a[j];
                a[j] = a[j+1];
                a[j+1] = change;
            }
        }
    }
    if( a[0] > 1 ){
        cout << 1;
        return 0;
    }
    int dayLonNhat[n];
    dayLonNhat[0] = 1;
    for( i = 1; i < n; i++){
        if( a[i] > dayLonNhat[i-1] + 1){
            cout << dayLonNhat[i-1]+1;
            return 0;
        }
        dayLonNhat[i] = dayLonNhat[i-1]+a[i];
    }
    cout << dayLonNhat[n-1];
    return 0;
}
