#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, i, j;
    cin >> n;
    int x[n], y[n];
    for( i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    for( i = 0; i < n-1; i++){
        for( j = 0; j < n-1; j++){
            if( x[j+1] < x[j]){
                int change1 = x[j], change2 = y[j];
                x[j] = x[j+1];
                x[j+1] = change1;
                y[j] = y[j+1];
                y[j+1] = change2;
            }
        }
    }
    for( i = 0; i < n; i++){
        s = s + y[i] + max( x[i]-s,0);
    }
    cout << s;
    return 0;
}
