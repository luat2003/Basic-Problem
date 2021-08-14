#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    char s[5];
    cin >> s;
    int a = (y-3)%10;
    if( (y-3)%10 == 0){
        a = 10;
    }
    if( strcmp(s, "GIAP") == 0){
        if( 1-a > -6){
            cout << y+1-a;
            return 0;
        }
        cout << y+11-a;
        return 0;
    }
    if( strcmp(s, "AT") == 0){
        if( 2-a > -6){
            cout << y+2-a;
            return 0;
        }
        cout << y+12-a;
        return 0;
    }
    if( strcmp(s, "BINH") == 0){
        if( 3-a > -6){
            cout << y+3-a;
            return 0;
        }
        cout << y+13-a;
        return 0;
    }
    if( strcmp(s, "DINH") == 0){
        if( 4-a > -6){
            cout << y+4-a;
            return 0;
        }
        cout << y+14-a;
        return 0;
    }
    if( strcmp(s, "MAU") == 0){
            cout << y+5-a;
            return 0;
    }
    if( strcmp(s, "KY") == 0){
        if( -4-a > -6){
            cout << y-4-a;
            return 0;
        }
        cout << y+6-a;
        return 0;
    }
    if( strcmp(s, "CANH") == 0){
        if( -3-a > -6){
            cout << y-3-a;
            return 0;
        }
        cout << y+7-a;
        return 0;
    }
    if( strcmp(s, "TAN") == 0){
        if( -2-a > -6){
            cout << y-2-a;
            return 0;
        }
        cout << y+8-a;
        return 0;
    }
    if( strcmp(s, "NHAM") == 0){
        if( -1-a > -6){
            cout << y-1-a;
            return 0;
        }
        cout << y+9-a;
        return 0;
    }
    if( strcmp(s, "QUY") == 0){
        if( -a > -6){
            cout << y-a;
            return 0;
        }
        cout << y+10-a;
        return 0;
    }



    int b = (y-3)%12;
    if( (y-3)%12 == 0){
        b = 12;
    }
    if( strcmp(s, "TI") == 0){
        if( 1-b > -7){
            cout << y+1-b;
            return 0;
        }
        cout << y+13-b;
        return 0;
    }

    if( strcmp(s, "SUU") == 0){
        if( 2-b > -7){
            cout << y+2-b;
            return 0;
        }
        cout << y+14-b;
        return 0;
    }
    if( strcmp(s, "DAN") == 0){
        if( 3-b > -7){
            cout << y+3-b;
            return 0;
        }
        cout << y+15-b;
        return 0;
    }
    if( strcmp(s, "MAO") == 0){
        if( 4-b > -7){
            cout << y+4-b;
            return 0;
        }
        cout << y+16-b;
        return 0;
    }
    if( strcmp(s, "THIN") == 0){
        if( 5-b > -7){
            cout << y+5-b;
            return 0;
        }
        cout << y+17-b;
        return 0;
    }
    if( strcmp(s, "TY") == 0){
        cout << y+6-b;
        return 0;
    }
    if( strcmp(s, "NGO") == 0){
        if( -5-b > -7){
            cout << y-5-b;
            return 0;
        }
        cout << y+7-b;
        return 0;
    }
    if( strcmp(s, "MUI") == 0){
        if( -4-b > -7){
            cout << y-4-b;
            return 0;
        }
        cout << y+8-b;
        return 0;
    }
    if( strcmp(s, "THAN") == 0){
        if( -3-b > -7){
            cout << y-3-b;
            return 0;
        }
        cout << y+9-b;
        return 0;
    }
    if( strcmp(s, "DAU") == 0){
        if( -2-b > -7){
            cout << y-2-b;
            return 0;
        }
        cout << y+10-b;
        return 0;
    }
    if( strcmp(s, "TUAT") == 0){
        if( -1-b > -7){
            cout << y-1-b;
            return 0;
        }
        cout << y+11-b;
        return 0;
    }
    if( strcmp(s, "HOI") == 0){
        if( -b > -7){
            cout << y-b;
            return 0;
        }
        cout << y+12-b;
        return 0;
    }
}
