#include <iostream>

using namespace std;

int main()
{
    int a[6], b[6], i, j;
    for( i = 0; i < 6; i++){
        int x, y;
        cin >> x >> y;
        a[i] = min(x,y);
        b[i] = max(x,y);
    }
    for( i = 0; i < 5; i++){
        for( j = 0; j < 5; j++){
            if( a[j] > a[j+1] ){
                int change1 = a[j], change2 = b[j];
                a[j] = a[j+1];
                b[j] = b[j+1];
                a[j+1] = change1;
                b[j+1] = change2;
            }
            if( a[j] == a[j+1] ){
                if( b[j] > b[j+1] ){
                    int change1 = a[j], change2 = b[j];
                a[j] = a[j+1];
                b[j] = b[j+1];
                a[j+1] = change1;
                b[j+1] = change2;
                }
            }
        }
    }
    if( a[0] == a[1] && b[0] == b[1] ){
        if( a[2] == a[3] && b[2] == b[3] ){
            if( a[4] == a[5] && b[4] == b[5] ){
                if( b[0] == a[4] && a[1] == a[2] && b[2] == b[4]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
