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

int kt( int i, int y1 ){
    if( (i <= 7 && i%2 == 1) || (i >=8 && i%2 == 0) ){
        return 3;
    }
    if( i == 2 ){
        return ktNamNhuan(y1);
    }
    return 2;
}

int main()
{
    int d, m , y, y1;
    cin >> d >> m >> y >> y1;
    int st = demNgay(d, m, y), d1, m1, countt = 0;
    for( m1 = 1; m1 <= 12; m1++){
        for( d1 = 1; d1 <= 28+kt(m1,y1); d1++){
            int kc = demNgay(d1, m1, y1) - st;
            if( kc % (23*27) == 0 || kc % (23*33) == 0 || kc % (27*11) == 0 ){
                cout << d1 << " " << m1 << " " << y1 << endl;
                countt = 1;
            }
        }
    }
    if( countt == 0 ){
        cout << "lucky";
    }
    return 0;
}
