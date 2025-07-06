#include<iostream>
#include<numeric>
#include<vector>

using namespace std;



int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)
        {
            cin >> x;
        }

        int g = a[0];

        for (int i = 1; i < n; i++)
        {
            g = gcd(g, a[i]);
        }
        

        int opp = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != g) opp++;
        }
        cout << opp << endl;
    }
    
}