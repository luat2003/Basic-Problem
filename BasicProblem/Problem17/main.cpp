#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int x[n], y[n];
    for( i = 0;i < n; i++){
        cin >> x[i] >> y[i];
    }
    int mi = 999999999;
    for( i = 0; i < n; i++){
        int s = 0;
        for( j = 0; j < n; j++){
            s += abs(y[j] - y[i]);
        }
        mi = min (mi, s);
    }
    cout << mi;
    return 0;
}
