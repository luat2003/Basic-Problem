#include <iostream>

using namespace std;

int main()
{
    int g, s, k, n, i;
    cin >> g >> s >> k >> n;
    int tong = g*17*29 + s * 29 + k;
    int tongChi = 0;
    int g1,s1,k1;
    for( i = 0; i < n; i++){
        cin >> g1 >> s1 >> k1;
        tongChi += g1*17*29 + s1*29 + k1;
    }
    int conLai = tong - tongChi;
    if( conLai < 0 ){
        cout << -1;
        return 0;
    }
    k = conLai % 29;
    s = (conLai/29)%17;
    g = conLai/(29*17);
    cout << g << " " << s << " " << k;
    return 0;
}
