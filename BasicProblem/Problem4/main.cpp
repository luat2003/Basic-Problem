#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    double a[n], b[n];
    for( i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    double s[n] = {0}, m = 999999999;
    for( i = 0; i < n; i++){
        for( j = 0; j < n; j++){
            s[i] += sqrt( pow(a[j]-a[i],2) + pow(b[j]-b[i],2) );
        }
        m = min( m, s[i]);
    }
    for( i = 0; i < n; i++){
        if( abs(m-s[i])<1e-6 ){
            printf("%d %.3lf", i+1, s[i]);
            break;
        }
    }
    return 0;
}
