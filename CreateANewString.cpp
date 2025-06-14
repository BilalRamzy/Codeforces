#include<iostream>
#include<string>
using namespace std;



int main()
{
    string s,t;

    getline(cin, s);
    getline(cin, t);

    cout << s.length() << " " << t.length() << endl;

    cout << s << " " << t << endl;

    return 0;
}