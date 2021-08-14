#include <iostream>
#include <math.h>
using namespace std;

double banKinhNhoNhat( double a1, double b1, double a2, double b2, double a3, double b3 ){
    double c1 = pow(a2-a3,2) + pow(b2-b3,2);
    double c2 = pow(a3-a1,2) + pow(b3-b1,2);
    double c3 = pow(a1-a2,2) + pow(b1-b2,2);
    if( c1 >= c2 + c3 ){
        return sqrt(c1)/2;
    }
    if( c2 >= c3 + c1 ){
        return sqrt(c2)/2;
    }
    if( c3 >= c1 + c2 ){
        return sqrt(c3)/2;
    }
    c1 = sqrt(c1);
    c2 = sqrt(c2);
    c3 = sqrt(c3);
    double p = (c1 + c2 + c3)/2;
    double r = ( c1 * c2 * c3 )/(4*sqrt(p*(p-c1)*(p-c2)*(p-c3)));
    return r;
}

int main()
{
    int n, i, j, k;
    cin >> n;
    double a[n], b[n];
    for( i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    double m = 0;
    for( i = 0; i < n-2; i++){
        for( j = i+1; j < n-1; j++){
            for( k = j+1; k < n; k++){
                m = max(m, banKinhNhoNhat(a[i], b[i], a[j], b[j], a[k], b[k]));
            }
        }
    }
    (cout << fixed).precision(3);
    int x = m*1000000;
    int y = x*1.0/1000;
    if( x%1000 >= 499 ){
        y++;
    }
    double w = y*1.0/1000;
    cout << w;
    return 0;
}
