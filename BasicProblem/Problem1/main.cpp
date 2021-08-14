#include <iostream>

using namespace std;

int main()
{
    int i, j, n;
    int a[1001], s[1001];
    cin >> n;
    s[0] = 0;
    for( i = 0; i<n; i++ ){
        cin >> a[i];
        s[i+1] = s[i] + a[i];
    }
    double min = 999999999;
	double max = -999999999;
	for( i = 1; i < n; i++){
        for( j = i+1; j<=n; j++){
            double x = (s[j] - s[i-1])*1.0/(j-i+1);
            if( max < x ){
                max = x;
            }
            if( min > x ){
                min = x;
            }
        }
	}
	printf("%0.3lf %0.3lf", min, max);
    return 0;
}
