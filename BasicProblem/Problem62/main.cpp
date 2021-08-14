#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double H, W, w1, w2;
    cin >> H >> W >> w1 >> w2;
    double c = sqrt( (w2-w1)*(w2-w1)+H*H );
    (cout << fixed).precision(5);
    cout << (w1+w2)*H + w1*W + W*c;
    return 0;
}
