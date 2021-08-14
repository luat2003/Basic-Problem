#include <iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int countt = 9999-n;
    if( n < 9990 ){
        countt += (999-(n/10 + 1)) + 1;
    }
    if( n < 9900 ){
        countt += (99-(n/100+1)) + 1;
    }
    if( n < 9000 ){
        countt += (9-(n/1000+1)) + 1;
    }
    cout << countt;
    return 0;
}
