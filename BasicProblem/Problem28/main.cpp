#include <iostream>

using namespace std;

int ktNamNhuan( int y ){
    if( y%4 == 0 && y%100 != 0){
        return 1;
    }
    if( y%400 == 0 ){
        return 1;
    }
    return 0;
}

int demNamNhuanTruocDo(int y){
    if( y == 1 ){
        return 0;
    }
    return demNamNhuanTruocDo(y-1)+ktNamNhuan(y-1);
}

int demNgay(int d, int m, int y){
    int k = demNamNhuanTruocDo(y);
    int dem = k*366+(y-1-k)*365;
    if( m <= 2 ){
        dem += d+(m/2)*31;
        return dem;
    }
    if( ktNamNhuan(y) ){
        dem++;
    }
    if( m<=7 ){
        dem += 31*(m/2)+28+(m-(m/2)-2)*30+d;
        return dem;
    }
    dem += 31*((m+1)/2)+28+(m-((m+1)/2)-2)*30+d;
    return dem;
}

int main()
{
    int n;
    cin >> n;
    int d, m, y;
    for( y = 1; ; y++){
        if( demNgay(1,1,y) > n){
            y = y-1;
            break;
        }
    }
    for( m = 1; m <= 13; m++){
        if( demNgay(1,m,y) > n ){
            m = m-1;
            break;
        }
    }
    for( d = 1; d <= 31; d++){
        if( demNgay(d,m,y) == n ){
            cout << d << " " << m << " " << y;
        }
    }
    return 0;
}
