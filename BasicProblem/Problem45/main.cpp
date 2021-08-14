#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[80];
    cin >> a;
    int i, j, countt = 0;
    for( i = 0; i < strlen(a); i++){
        if( a[i] == 'C' && (i == 0 || a[i-1] != 'C' ) ) {
            for( j = i+1; j < strlen(a); j++){
                if( a[j] == 'N' ){
                    break;
                }
            }
            countt += (j-i)*(j-i+1)/2;
        }
    }
    cout << countt;
    return 0;
}
