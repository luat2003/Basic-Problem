#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    int s[n+1];
    s[0] = 0;
    for( i = 0; i < n; i++){
        cin >> a[i];
        s[i+1] = s[i] + a[i];
    }
    int t = s[n];
    if( t == 0 ){
        int countt = 0;
        int j = 1;
        i = 0;
        while( j <= n ){
            if( s[j] - s[i] == 0 ){
                i = j;
                countt++;
            }
            j++;
        }
        cout << countt;
        return 0;
    }
    for( i = 1; i <= n; i++){
        if( s[i] == 0 ){
            continue;
        }
        if( t % s[i] == 0 ){
            int x = t/s[i], k = i;
            while( x > 1 ){
                int c = x;
                int j = k+1;
                while( j <= n ){
                    if( s[j] - s[k] == s[i] ){
                        k = j;
                        x--;
                        break;
                    }else{
                        j++;
                    }
                }
                if( x == c ){
                    break;
                }
            }
            if( x == 1 ){
                cout << t/s[i];
                break;
            }
        }
    }
    return 0;
}
