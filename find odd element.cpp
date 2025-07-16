#include<iostream>
#include<unordered_map>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int,int> count;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        count[num]++;
    }

    for (auto& pair : count)
    {
        if(pair.second % 2 == 1)
        {
            cout << pair.first << endl;
            break;
        }
    }
    
    return 0;
}