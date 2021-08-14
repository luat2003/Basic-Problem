#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if( x <= b && y <= a ){
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
