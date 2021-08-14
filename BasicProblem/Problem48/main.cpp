#include <iostream>

using namespace std;

int main()
{
    int x, n, i;
    cin >> x >> n;
    n = n%1600; // 1600 = phi(phi(n))
    for( i = 2; i <= n; i++){
        x = (x*x) % 10000;
    }
    cout << x;
    return 0;
}
