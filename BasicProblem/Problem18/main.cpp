#include <iostream>

using namespace std;

bool kt[201][201];

int main()
{
    int i, j, k;
    for( i = 0; i <= 200; i++){
        for( j = 0; j <= 200; j++){
            kt[i][j] = false;
        }
    }
    int n, countt = 0;
    cin >> n;
    int a[n], b[n], c[n], d[n];
    for( i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for( i = 0; i < n; i++){
        for( j = 100 - d[i]; j < 100 - b[i]; j++){
            for( k = 100+a[i]; k < 100+c[i]; k++){
                if( kt[j][k] == false){
                    kt[j][k] = true;
                }
            }
        }
    }
    for( i = 0; i <= 200; i++){
        for( j = 0; j <= 200; j++){
            if( kt[i][j] == true){
                countt++;
            }
        }
    }
    cout << countt;
    return 0;
}
