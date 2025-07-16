#include<iostream>
#include<vector>
#include<queue>

using namespace std;



int main()
{
    int n, m; cin >> n >> m;

    vector<int> seats(m);

    for (int i = 0; i < m; i++)
    {
        cin >> seats[i];
    }
    
    priority_queue<int> maxheap;

    for (int i = 0; i < m; i++)
    {
        maxheap.push(seats[i]);
    }

    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int top = maxheap.top();
        maxProfit += top;
        maxheap.pop();
        if(top > 1)
        {
            maxheap.push(top -1);
        }
    }
    

    priority_queue<int, vector<int>, greater<int>> minheap;

    for (int i = 0; i < m; i++)
    {
        minheap.push(seats[i]);
    }
    int minProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int top = minheap.top();
        minProfit += top;
        minheap.pop();

        if(top > 1)
        {
            minheap.push(top -1);
        }
    }
    
    cout << maxProfit << " " << minProfit << endl;

    return 0;
}