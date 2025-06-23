#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string s;
    cin >> s;

    int posAB = s.find("AB");

    if(posAB != string::npos)
    {
        if(s.find("BA", posAB + 2) != string::npos)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    int posBA = s.find("BA");

    if(posBA != string::npos)
    {
        if(s.find("AB", posBA+2) != string::npos)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    

    cout << "NO" << endl;
    return 0;
}