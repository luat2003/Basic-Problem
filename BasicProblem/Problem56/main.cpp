#include <iostream>

bool kt[50001];

void sangNguyenTo( int n){
    int i, j;
    for (i = 2; i <= n; ++i){
		kt[i] = true;
	}
	for (i = 2; i * i <= n; ++i)
	{
		if (kt[i] == true)
		{
			for (j = i * i; j <= n; j = j + i)
				kt[j] = false;
		}
	}
}

int tongChuSo( int n ){
    if( n < 10 ){
        return n*n;
    }
    return tongChuSo( n/10)+ (n%10)*(n%10);
}

int ktSoTotHon( int x, int y){
    if( tongChuSo(x) < tongChuSo(y) ){
        return y;
    }
    return x;
}

using namespace std;

int main()
{
    int l, r, i, j;
    cin >> l >> r;
    sangNguyenTo(r);
    int a[r-l], countt = 0;
    for( i = l; i <= r; i++){
        if( kt[i] ){
            a[countt] = i;
            countt ++;
        }
    }
    if( countt == 0){
        cout << -1;
        return 0;
    }
    int x = a[0];
    for( i = 1; i < countt ; i++){
        x = ktSoTotHon(x, a[i]);
    }
    cout << x;
    return 0;
}
