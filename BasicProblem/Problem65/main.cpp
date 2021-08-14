#include <iostream>

using namespace std;

int main()
{
    int h, m;
    char c;
    cin >> h >> c >> m;
    if( h == 0 && m == 0){
        cout << 0;
        return 0;
    }
    int countt = 24*60-(h*60+m)+3;
    if(h*60+m < 24*60-10){
        countt += (24*6-((h*60+m)/10 + 1)) + 1;
    }
    if( h*60+m < 23*60){
        countt += (24-((h*60+m)/60 + 1));
    }
    if( h*60+m < 20*60){
        countt += (2-((h*60+m)/600 + 1));
    }
    cout << countt << endl;
    return 0;
}
