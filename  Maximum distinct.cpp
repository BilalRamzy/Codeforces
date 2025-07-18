#include<bits/stdc++.h>

using namespace std;




int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_map<char, int> freq;
    int max_dis = 0;

    for (int i = 0; i < k; i++)
    {
        freq[s[i]]++;
    }
    max_dis = freq.size();

    for (int i = k; i < n; i++)
    {
        freq[s[i -k]]--;
        if(freq[s[i -k]] == 0)
        {
            freq.erase(s[i -k]);
        }
        freq[s[i]]++;
    }
    
    
    if((int)freq.size() > max_dis)
    {
        max_dis = freq.size();
    }

    cout << max_dis << endl;

    return 0;
}