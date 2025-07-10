#include<iostream>
#include<vector>
#include<string>
using namespace std;



int main()
{
    string s;
    cin >> s;

    int lengthS = s.length();

    vector<int> prefix(lengthS, 0);

    for (int i = 1; i < lengthS; i++)
    {
        prefix[i] = prefix[i - 1];
        
        if (s[i] == s [i -1])
        {
            prefix[i]++;
        }
        
    }

    int m; cin >> m;

    while (m--)
    {
        int l,r;
        cin >> l >> r;

        cout << prefix[r -1] - prefix[l -1] << endl;;
    }
    
    return 0;
}