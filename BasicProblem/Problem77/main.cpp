#include <string>
#include <iostream>
#include <string.h>
using namespace std;

int stringToNum(char c)
{
    return c - '0';
}

char numToString(int n)
{
    return (char)(n+48);
}

void chuanHoa(string &a, string &b)
{
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1-l2, '0');
    }
    else
    {
        a.insert(0, l2-l1, '0');
    }
}

string sum(string a, string b)
{
    string s = "";
    chuanHoa(a,b);
    int l = a.length();

    int temp = 0;
    for (int i=l-1; i>=0; i--)
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;
        s.insert(0,1,numToString(temp%10));
        temp = temp/10;
    }
    if (temp>0)
    {
        s.insert(0,1,numToString(temp));
    }
    return s;
}

string nhanNho(char a, string b)
{
    string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)
    {
        temp = stringToNum(a) * stringToNum(b[i]) + temp;
        s.insert(0,1,numToString(temp%10));
        temp = temp/10;
    }

    if (temp>0)
    {
        s.insert(0,1,numToString(temp));
    }
    return s;
}

string square(string a)
{
    string s = "";
    int l = a.length();
    string s1[l];

    for (int i=l-1; i>=0; i--)
    {
        s1[i] = nhanNho(a[i], a);
        s1[i].insert(s1[i].length(), l-i-1, '0');
        s = sum(s, s1[i]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    string k = "0";
    string pow2[301];
    int i;
    pow2[0] = "1";
    pow2[1] = "2";
    for( i = 2; i <= 300; i++){
        pow2[i] = sum(pow2[i-1],pow2[i-1]);
    }

    for( i = 300; i >= 0; i--){
        string x = square(sum(k,pow2[i]));
        if( x.length() > s.length() ){
            continue;
        }
        if( x.length() < s.length() ){
            k = sum(k,pow2[i]);
            continue;
        }
        if( x <= s){
            k = sum(k,pow2[i]);
        }
    }
    cout << k;
    return 0;
}
