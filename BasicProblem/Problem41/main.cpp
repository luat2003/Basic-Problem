#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[1000];
    cin >> a;
    int i, j, n = strlen(a), dem = n*(n+1)/2;
    for( i = 0; i < n; i++){
        int ma = 0;
        for( j = i+1; j < n; j++){
            int countt = 0;
            if( a[j] == a[i] ){
                int j1 = j, i1 = i;
                while( a[j1] == a[i1] ){
                    countt++;
                    j1++;
                    i1++;
                }
            }
            ma = max(ma, countt);
        }
        dem -= ma;
    }
    cout << dem;
    return 0;
}
