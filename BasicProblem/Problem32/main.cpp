#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int a[3], b[3];
    for( i = 0; i < 3; i++){
        cin >> a[i];
    }
    for( i = 0; i < 3; i++){
        cin >> b[i];
    }
    double c[3] = {0}, mi = 999999999.0;
    for( i = 0; i < 3; i++){
        if( b[i] == 0 ){
            continue;
        }
        c[i] = a[i]*1.0/b[i];
        mi = min(mi, c[i]);
    }
    (cout << fixed).precision(6);
    for( i = 0; i < 3; i++){
        cout << abs(a[i]-b[i]*mi) << " ";
    }
    return 0;
}
