#include <iostream>
#include <math.h>
using namespace std;

int timViTri( int k, int n){
    if( k == pow(2,n-1) ){
        return 1;
    }
    if( k % 2 == 1 ){
        return ((k-1)/2)%2;
    }
    if( k % 2 == 0 ){
        return timViTri(k/2,n-1);
    }
}

int main()
{
    int n, k;
    while(cin >> n >> k){
        if( timViTri(k,n) == 1){
            cout << "D" << endl;
        }else{
            cout << "U" << endl;
        }
    }
    return 0;
}
