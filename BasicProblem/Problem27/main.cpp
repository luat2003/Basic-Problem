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

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    int k = demNamNhuanTruocDo(y);
    int dem = k*366+(y-1-k)*365;
    if( m <= 2 ){
        dem += d+(m/2)*31;
        cout << dem;
        return 0;
    }
    if( ktNamNhuan(y) ){
        dem++;
    }
    if( m<=7 ){
        dem += 31*(m/2)+28+(m-(m/2)-2)*30+d;
        cout << dem;
        return 0;
    }
    dem += 31*((m+1)/2)+28+(m-((m+1)/2)-2)*30+d;
    cout << dem;
    return 0;
}
