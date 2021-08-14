#include <iostream>

using namespace std;

int pow10( int k ){
    if( k == 0 ){
        return 1;
    }
    return pow10(k-1)*10;
}

int main()
{
    int c, k;
    cin >> c >> k;
    if( k == 0 ){
        cout << c;
        return 0;
    }
    if( pow10(k) >= c ){
        cout << pow10(k);
        return 0;
    }
    int gia = c/pow10(k);
    if( c % pow10(k) >= 5*pow10(min(1,k-1))-1 ){
        gia++;
    }
    cout << gia*pow10(k);
    return 0;
}
