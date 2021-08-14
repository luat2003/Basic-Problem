#include <iostream>

using namespace std;

int main()
{
    int a[4];
    while( cin >> a[0] >> a[1] >> a[2] >> a[3]){
        int i, j;
        for( i = 0; i < 3; i++){
            for( j = 0; j < 3; j++){
                if( a[j] > a[j+1]){
                    int change = a[j];
                    a[j] = a[j+1];
                    a[j+1] = change;
                }
            }
        }
        if( a[0] + a[1] + a[2] > a[3]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
