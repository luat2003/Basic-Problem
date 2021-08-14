#include <iostream>

using namespace std;

int main()
{
    long long d, k, i, j;
    while( cin >> d >> k ){
        if( k > d ){
            cout << -1 << endl;
            continue;
        }
        if( k == 1 ){
            cout << d << endl;
            continue;
        }
        int i, kt = 1;
        int a[101], b[101];
        a[0] = d;
        b[0] = 0;
        a[1] = (a[0]*k)%10;
        b[1] = (a[0]*k)/10;
        i = 1;
        while( a[i] != d || a[i-1] != d/k ){
            i++;
            a[i] = (a[i-1]*k+b[i-1])%10;
            b[i] = (a[i-1]*k+b[i-1])/10;
            for( j = 0; j < i-1; j++){
                if( a[j] == a[i] && a[j-1] == a[i-1] ){
                    cout << -1 << endl;
                    kt = 0;
                    break;
                }
            }
            if(kt == 0){
                break;
            }
        }
        if( kt == 0 ){
            cout << -1 << endl;
            continue;
        }else{
            for( i = i-1; i >= 0; i--){
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}
