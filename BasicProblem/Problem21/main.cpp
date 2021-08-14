#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int k, i, j, l, countt;
    char a[10000];
    cin >> a >> k;
    int n = strlen(a);
    for( i = 0; i < k; i++){
        n--;
        for( j = 0; j < n; j++){
            if( a[j] > a[j+1] ){
                for( l=j; l < n; l++){
                    a[l] = a[l+1];
                }
                break;
            }
        }
    }
    for( i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}
