#include <iostream>

using namespace std;

int main()
{
    int n, countt = 0;
    cin >> n;
    while( n > 10 ){
        int a = n, b = 1;
        while( a > 0 ){
            b *= a%10;
            a = a/10;
        }
        n = b;
        countt++;
    }
    cout << countt;
    return 0;
}
