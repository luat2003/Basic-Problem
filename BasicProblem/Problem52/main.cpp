#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <string>
using namespace std;

string s[501];

void xauKhongLap( int n ){
    s[1] = "1";
    cout << "1";
    int i;
    for( i = 2; i <= n; i++){
        string str;
        stringstream ss;
        ss << i;
        str = ss.str();
        if( s[i-1].find(str) != string::npos){
            s[i] = s[i-1];
        }else{
            s[i] = s[i-1]+str;
            cout << str;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    xauKhongLap(n);
    return 0;
}
