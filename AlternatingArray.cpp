#include<iostream>
#include<vector>

using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ops_start_pos = 0;
    int ops_start_neg = 0;
    

    for (int i = 0; i < n; i++)
    {
        int should_be_pos = (i  % 2 == 0) ? 1 : -1;
        
        if(a[i] * should_be_pos < 0)
        {
            ops_start_pos++;
        }

        int should_be_neg = (i % 2 == 0) ? -1 : 1;

        if (a[i] * should_be_neg < 0)
        {
            ops_start_neg++;
        }
        
    }
    cout << min(ops_start_pos,  ops_start_neg) << endl;

}
