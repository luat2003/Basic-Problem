#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, j, countt = 0;
    cin >> n;
    int x[n], y[n], r[n];
    for( i = 0; i < n; i++){
        cin >> x[i] >> y[i] >> r[i];
    }
    for( i = 0; i < n-1; i++){
        for( j = i+1; j < n; j++){
            if( (pow(x[i]-x[j],2) + pow(y[i]-y[j],2)) < pow(r[i]+r[j],2) ){
                countt++;
            }
        }
    }
    cout << countt;
    return 0;
}
