#include <iostream>

using namespace std;

int pow2( int n ){
    if( n == 0 ){
        return 1;
    }
    return pow2(n-1)*2;
}

int main()
{
    int n;
    cin >> n;
    cout << (pow2(n-1)+1)*(pow2(n-1)+1);
    return 0;
}
