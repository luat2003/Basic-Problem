#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, k, i, j, time, Mi = 999999999, mi = 999999999;
    cin >> n >> k;
    int a[n];
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
    for( time = 0; time < k; time++){
        int s = 0;
        int ma = -1;
        for( i = 0; i < n; i++){
            int j = ceil((a[i]-time)*1.0/k);
            s += j*k+time-a[i];
            ma = max(j*k+time-a[i], ma );
        }
        mi = min(mi, s);
        Mi = min(Mi, ma);
    }
    cout << mi << endl << Mi;
    return 0;
}
