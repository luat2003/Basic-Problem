#include <iostream>
#include <string.h>
using namespace std;

bool ktPalindrome( char x[1000] ){
    int i, a = strlen(x);
    for( i = 0; i < (a-1)/2; i++){
        if( x[i] != x[a-1-i] ){
            return false;
        }
    }
    return true;
}

int main()
{
    char x[1000];
    cin >> x;
    int a = strlen(x), i, k = 0;
    while( ktPalindrome(x) == false && k < a){
        k++;
        char c = x[a-1];
        for( i = a-1; i >= 1; i--){
            x[i] = x[i-1];
        }
        x[0] = c;
    }
    if( ktPalindrome(x) ){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
