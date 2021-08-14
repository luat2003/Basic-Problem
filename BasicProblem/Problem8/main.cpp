#include <iostream>

using namespace std;

bool kt[100];

int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
    for( i = 0; i < n; i++){
        kt[i] = true;
     }
    for( i = 0; i < n; i++){
        if( n%(i+1) == 0 ){
            for(j = 0; j < n-i-1; j++){
                if( a[j+i+1] != a[j] ){
                    kt[i] = false;
                    break;
                }
            }
        }else{
            kt[i] = false;
        }
    }
    for( i = 0; i < n; i++){
        if( kt[i] ){
            cout << i+1;
            break;
        }
    }
    return 0;
}
