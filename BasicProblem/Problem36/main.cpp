#include <iostream>

using namespace std;

int reversible(int n){
	int a = n, re = 0;
	while(a>0){
		re = 10*re + a%10;
		a = a/10;
	}
	return re;
}

int main()
{
    int n;
    cin >> n;
    do{
        n += reversible(n);
    }while( n != reversible(n) );
    cout << n;
    return 0;
}
