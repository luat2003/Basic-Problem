#include <iostream>

using namespace std;

int main()
{
    int a[1001];
    int i, j, n;
    cin >> n;
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
    for( i = 0; i < n-1; i++){
        for( j = i+1; j < n; j++){
            if( a[j] < a[i] ){
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    int count = 1;
    for( i = 0; i < n-1; i++){
        if( a[i+1] != a[i] ){
            count++;
        }
    }
    cout << count << endl;
    int b[count];
    int k = 0, l = 0;
    while( l<count ){
        b[l] = 1;
        while( a[k+1]== a[k]){
            b[l]+=1;
            k++;
        }
        cout << a[k] << " " << b[l] << endl;
        k++;
        l++;
    }
    return 0;
}
