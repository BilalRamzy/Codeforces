#include<iostream>
#include<vector>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    cin >> a[i];


        long long currentSum = a[0];
        long long maxSum = a[0];


        //  -1 2 4 -3 5 2 -5 2

        for (int i = 1; i < n; i++) 
        {
            currentSum = max((long long)a[i], currentSum + a[i]);

            maxSum = max(maxSum, currentSum);
        }
        cout << maxSum << endl;
     
}