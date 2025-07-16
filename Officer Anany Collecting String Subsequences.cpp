#include<iostream>
#include<string>
#include<climits>

using namespace std;

bool canformAlphabet(const string& s, int start, int& len)
{
    char expected = 'A';
    int i = start;

    while (i < s.length() && expected <= 'Z')
    {
        if (s[i] == expected)
        {
            expected++;
        }
        i++;
    }
    if(expected > 'Z')
    {
        len = i - start;
        return true;
    }
    return false;
}

int main()
{
    int t; cin >> t;

    while (t--)
    {
        int n; 
        string s; 
        cin >> n >> s;

        int minlen = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'A')
            {
                int len;
                if(canformAlphabet(s, i, len))
                {
                    minlen = min(minlen, len);
                }
            }
        }
            cout << minlen << endl;
    }
    
    return 0;
}