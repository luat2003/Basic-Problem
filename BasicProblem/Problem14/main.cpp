#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, k, i, s = 0, x, y;
    cin >> n >> k;
    int a[100],b[100];
    for( i = 1; i <= k; i++){
        cin >> a[i] >> b[i];
        s += 10*(max(abs((n+1)/2-a[i]),abs((n+1)/2-b[i]))-min(abs((n+1)/2-a[i]),abs((n+1)/2-b[i]))) + 15*min(abs((n+1)/2-a[i]),abs((n+1)/2-b[i]));
    }
    cout << s;
    return 0;
}
