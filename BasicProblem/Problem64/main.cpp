#include <iostream>

using namespace std;

int main()
{
    int n, m, i, countt = 0;
    cin >> n >> m;
    for( i = 1; i <= n; i++){
        if( i*(i+1)/2 % m == 0 ){
            countt++;
        }
    }
    cout << countt;
    return 0;
}
