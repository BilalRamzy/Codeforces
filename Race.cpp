#include<iostream>
#include<cmath>

using namespace std;




int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,x,y;
        cin >> a >> x >> y;

        bool possible = false;

        for (int b = 1; b <= 100; b++)
        {
            if(b == a) continue;

            int bobtoX = abs(b - x);
            int alicetoX = abs(a - x);

            int bobtoY = abs(b - y);
            int alicetoY = abs(a - y);

            if(bobtoX < alicetoX && bobtoY < alicetoY)
            {
                possible = true;
                break;
            }
        }
        
        if(possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}