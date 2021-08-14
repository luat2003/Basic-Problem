#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int x[n];
    for(i = 0; i < n; i++){
        cin >> x[i];
    }
    int p[n] = {0};
    p[0] = 0;
    for( i = 1; i < n; i++){
        for( j = 0; j < i; j++){
            if( x[j] > x[i] ){
                p[i]++;
            }
        }
    }
    for(i = 0; i < n; i++){
        cout << p[i] << " ";
    }
    return 0;
}
