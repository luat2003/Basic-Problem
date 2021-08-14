#include <iostream>

using namespace std;

int dem( int n, int k ){
    if( k >= n || (n+k)%2 != 0 ){
        return 1;
    }
    return dem((n+k)/2,k)+dem((n-k)/2,k);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << dem(n,k);
    return 0;
}
