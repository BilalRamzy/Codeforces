#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;



int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    

    int count =  0;

    for (int i = 0; i < n; i++)
    {
        if(s.count(a[i] + 1))
        {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}