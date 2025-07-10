#include<iostream>
#include<string>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int freq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            cout << char(i + 'a');
        }
        
    }
    
    cout << "\n";
    return 0;
}