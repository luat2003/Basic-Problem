#include <iostream>

using namespace std;

int timSoDu( int a, int k ){
    a = a % 29;
    k = k % 28;
    if( k == 0 ){
        return 0;
    }
    int modd = 1, i;
    for( i = 0; i < k; i++){
        modd = (modd*a) % 29;
    }
    return modd-1;
}

int main()
{
    int x;
    while( cin >> x && x > 0){
        int a = (timSoDu(2,2*x+1)*timSoDu(3,x+1)*timSoDu(167,x+1)*20)%29;
        cout << (29-a)%29 << endl;
    }
    return 0;
}
