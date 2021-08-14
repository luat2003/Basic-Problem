#include <iostream>

using namespace std;

int main()
{
    int n, i, j, countt1 = 0, countt2 = 0, countt3 = 0, countt4 = 0;
    cin >> n;
    char a[n+1];
    cin >> a;
    int x = 0, t = 0;
    for( i = 0; i < n; i++){
        if( a[i] == 'X'){
            x++;
        }
        if( a[i] == 'T'){
            t++;
        }
    }
    for( i = 0; i < x; i++){
        if( a[i] != 'X' ){
            countt1++;
        }
        if( a[i] == 'T' ){
            countt3++;
        }
    }
    for( i = x; i < x+t; i++){
        if( a[i] != 'T' ){
            countt2++;
        }
        if( a[i] == 'X' ){
            countt4++;
        }
    }
    cout << countt1+countt2-min(countt3,countt4);
    return 0;
}
