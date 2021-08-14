#include <iostream>

using namespace std;

bool kt[101];

int main()
{
    int n, i, k;
    cin >> n;
    int p[n], x[n];
    kt[0] = true;
    for( i = 0; i < n; i++){
        cin >> p[i];
        kt[i+1] = true;
    }
    for( i = n-1; i >= 0; i--){
        int j = 0;
        k = n;
        while(1){
            if( kt[k] == false ){
                k--;
                continue;
            }
            if( j == p[i] ){
                break;
            }
            j++;
            k--;
        }
        x[i] = k;
        kt[k] = false;
    }
    for( i = 0; i < n; i++){
        cout << x[i] << " ";
    }
    return 0;
}
