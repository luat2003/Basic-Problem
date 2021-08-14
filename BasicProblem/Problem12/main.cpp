#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, k, l;
    cin >> m >> n;
    int a[200][200];
    int s[200][200];
    s[0][0] = 0;
    for( i = 1; i <= m; i++){
        for( j = 1; j <= n; j++){
            cin >> a[i][j];
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
        }
    }
    int ma = -999999999, u;
    for( i = 1; i <= m; i++){
        for( k = 1; k <= n; k++){
            for( j = i; j <= m; j++){
                for( l = k; l <= n; l++){
                    u = s[j][l]+s[i-1][k-1]-s[j][k-1]-s[i-1][l];
                    ma = max(ma, u);
                }
            }
        }
    }
    cout << ma;
    return 0;
}
