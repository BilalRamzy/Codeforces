#include<iostream>
#include<string>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;

    string s;
    cin >> s;

    int countL = 0, countR = 0, countF = 0, countB = 0;

    for (char c : s)
    {
        if(c == 'L') countL++;
        if(c == 'R') countR++;
        if(c == 'F') countF++;
        if(c == 'B') countB++;
    }

    bool canReachX = false;

    bool canReachY = false;

        
    bool canReachX = countR >= max(0, x) && countL >= max(0, -x);
    bool canReachY = countF >= max(0, y) && countB >= max(0, -y);
    
    if(canReachX && canReachY)
    {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}