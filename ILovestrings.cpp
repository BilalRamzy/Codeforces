#include<iostream>
#include<string>

using namespace std;



int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s,t;
        cin >> s >> t;

        int lenS = s.size();
        int lenT = t.size();

        int maxLength = max(lenS, lenT);

        for (int i = 0; i < maxLength; i++)
        {
            if(i < lenS) cout << s[i];
            if(i < lenT) cout << t[i];
        }
        cout << endl;
        
    }
    
    return 0;
}