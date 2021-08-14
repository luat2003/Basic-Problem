#include <iostream>

using namespace std;

int main()
{
    int n, i, x = 0, y = 0;
    char c, h = 'n';
    cin >> n;
    for( i = 0; i < n; i++ ){
        cin >> c;
        switch(c){
            case 'G':
                if( h == 'n'){
                    y++;
                }else if( h == 's' ){
                    y--;
                }else if( h == 'w' ){
                    x--;
                }else{
                    x++;
                }
                break;
            case 'B':
                if( h == 'n'){
                    y--;
                    h = 's';
                }else if( h == 's' ){
                    y++;
                    h = 'n';
                }else if( h == 'w' ){
                    x++;
                    h = 'e';
                }else{
                    x--;
                    h = 'w';
                }
                break;
            case 'L':
                if( h == 'n'){
                    x--;
                    h = 'w';
                }else if( h == 's' ){
                    x++;
                    h = 'e';
                }else if( h == 'w' ){
                    y--;
                    h = 's';
                }else{
                    y++;
                    h = 'n';
                }
                break;
            case 'R':
                if( h == 'n'){
                    x++;
                    h = 'e';
                }else if( h == 's' ){
                    x--;
                    h = 'w';
                }else if( h == 'w' ){
                    y++;
                    h = 'n';
                }else{
                    y--;
                    h = 's';
                }
                break;
        }
    }
    cout << x << " " << y;
    return 0;
}
