#include <iostream>

using namespace std;

bool kt[100][100];

int main()
{
    int m, n, i, j, k;
    cin >> m >> n;
    int a[m][n];
    for( i = 0; i < m; i++){
        for( j = 0; j < n; j++){
            cin >> a[i][j];
            kt[i][j] = true;
        }
    }
    int countt = m*n;
    for( i = 1; i < m-1; i++){
        for( j = 1; j < n-1; j++){
            for( k = i+1; k < m; k++){
                if( a[k][j] > a[i][j] ){
                    kt[i][j] = false;
                    break;
                }
            }
            if( kt[i][j] == true ){
                continue;
            }else{
                kt[i][j] = true;
            }
            for( k = 0; k < i; k++){
                if( a[i][j] < a[k][j] ){
                    kt[i][j] = false;
                    break;
                }
            }
            if( kt[i][j] == true ){
                continue;
            }else{
                kt[i][j] = true;
            }
            for( k = 0; k < j; k++){
                if( a[i][j] < a[i][k] ){
                    kt[i][j] = false;
                    break;
                }
            }
            if( kt[i][j] == true ){
                continue;
            }else{
                kt[i][j] = true;
            }
            for( k = j+1; k < n; k++){
                if( a[i][j] < a[i][k] ){
                    kt[i][j] = false;
                    break;
                }
            }
            if( kt[i][j] == false ){
                countt--;
            }
        }
    }
    cout << countt;
    return 0;
}
