#include <iostream>

using namespace std;

int gcd( int x, int y){
    if( y == 0 ){
        return x;
    }
    return gcd( y, x%y);
}

int main()
{
    int n, i, j, ucln = 1, ma = 1;
    cin >> n;
    int a[n];
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
    for( i = 0; i < n-1; i++){
        ucln = gcd( a[i], a[i+1]);
        if( ucln > 1 ){
            int dem = 0;
            for( j = i+2; j < n; j++){
                ucln = gcd( ucln, a[j] );
                if( ucln == 1 ){
                    break;
                }else{
                    dem++;
                }
            }
            ma = max( ma, dem+2);
        }
    }
    cout << ma;
    return 0;
}
