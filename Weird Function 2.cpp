#include<bits/stdc++.h>
using namespace std;

string f(int flag, const string& s1, const string& s2)
{
    if(flag == 1) return s1 + s2;
    return s2 + s1;
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    string part1 = f(0, s1, s2) + s1;
    string X = f(1, part1, s2);

    string part2 = f(1, s2, s1);
    string Y = s1 + f(0, s1+s2, part2);


    cout << f(1,X,Y) << endl;
}