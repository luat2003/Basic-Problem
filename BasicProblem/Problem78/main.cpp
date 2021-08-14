#include <iostream>
#include <string.h>
using namespace std;

int v2(int n){
    if( n%2 != 0){
        return 0;
    }
    return v2(n/2)+1;
}
int v5(int n){
    if( n%5 != 0){
        return 0;
    }
    return v5(n/5)+1;
}
int v2factorial( int n){
    if( n <= 2){
        return n-1;
    }
    if( n % 2 == 0){
        return v2factorial(n-1)+v2(n);
    }
    return v2factorial(n-1);
}
int v5factorial( int n){
    if( n <= 4){
        return 0;
    }
    if( n % 5 == 0){
        return v5factorial(n-1)+v5(n);
    }
    return v5factorial(n-1);
}

int v2cKn(int k, int n){
    return v2factorial(n)-v2factorial(k)-v2factorial(n-k);
}
int v5cKn(int k, int n){
    return v5factorial(n)-v5factorial(k)-v5factorial(n-k);
}
int v10cKn(int k, int n){
    return min(v2cKn(k,n), v5cKn(k,n));
}
int main()
{
    string S;
    cin >> S;
    int a = S.length(), i, j, s[26] = {0};
    for( i = 0; i < a; i++){
        for( j = 0; j <= 25; j++){
            if( S[i] == 'a'+j ){
                s[j]++;
            }
        }
    }
    int dem1 = 0, dem2 = 0;
    for( j = 0; j <= 24 && a > 0; j++){
        dem1 += v2cKn(s[j], a);
        dem2 += v5cKn(s[j], a);
        a = a - s[j];
    }
    cout << min(dem1,dem2);
    return 0;
}
