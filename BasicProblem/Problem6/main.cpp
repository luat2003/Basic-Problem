#include <iostream>

using namespace std;
bool kt[10000];
int main()
{
    int n, s, k;
    cin >> n >> s >> k;
    int i;
    int scl = n;
    for( i = 1; i <= n; i++){
        kt[i] = true;
    }
    int dem = 0;
    i = 0;
    while( scl > 0 ){
        i++;
        if( kt[i] ){
            dem++;
        }
        if( dem == s){
            dem = 0;
            kt[i] = false;
            scl--;
        }
        i = i%n;
    }
    if( i == 0 ){
        i = n;
    }
    int bd = (n+k-i+1)%n;
    if( bd == 0 ){
        bd = n;
    }
    cout << i << endl << bd;
    return 0;
}
