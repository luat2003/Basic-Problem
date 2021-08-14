#include <iostream>

using namespace std;

int main()
{
    int a[18], b[18], c[18], s[3] = {0}, i, j, k;
    while( cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2] >> c[0] >> c[1] >> c[2]){
        int kt = 0;
        c[3] = c[0], c[8] = c[0], c[10] = c[0], c[13] = c[0], c[17] = c[0];
        c[5] = c[1], c[6] = c[1], c[9] = c[1], c[14] = c[1], c[16] = c[1];
        c[4] = c[2], c[7] = c[2], c[11] = c[2], c[12] = c[2], c[15] = c[2];
        b[3] = b[0], b[8] = b[0], b[10] = b[0], b[13] = b[0], b[17] = b[0];
        b[5] = b[1], b[6] = b[1], b[9] = b[1], b[14] = b[1], b[16] = b[1];
        b[4] = b[2], b[7] = b[2], b[11] = b[2], b[12] = b[2], b[15] = b[2];
        a[3] = a[0], a[8] = a[0], a[10] = a[0], a[13] = a[0], a[17] = a[0];
        a[5] = a[1], a[6] = a[1], a[9] = a[1], a[14] = a[1], a[16] = a[1];
        a[4] = a[2], a[7] = a[2], a[11] = a[2], a[12] = a[2], a[15] = a[2];
        for( i = 0; i < 16; i+=3){
            for( j = 0; j < 16; j+=3){
                for( k = 0; k < 16; k+=3){
                    if( a[k]+b[i] <= c[j] && max(a[k+1],b[i+1]) <= c[j+1] && max(a[k+2],b[i+2]) <= c[j+2] ){
                        cout << "YES" << endl;
                        kt = 1;
                        break;
                    }
                }
                if( kt == 1 ){
                    break;
                }
            }
            if( kt == 1 ){
                break;
            }
        }
        if( kt == 1 ){
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
