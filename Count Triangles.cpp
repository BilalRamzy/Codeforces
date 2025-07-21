#include<bits/stdc++.h>

using namespace std;

// For example, consider array A 
                //  0  1  2  3  4  5  
// such that: A = {10, 2, 5, 1, 8, 12}, 
// There are four triangular triplets that can be constructed from elements of this array, 
// namely (0, 2, 4), (0, 2, 5), (0, 4, 5), and (2, 4, 5). 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    
    int count = 0;

    for (int p = 0; p < n; p++)
    {
        for (int q = p + 1; q < n; q++)
        {
            for (int r = q + 1; r < n; r++)
            {
                vector<int> sides = {a[p], a[q], a[r]};

                sort(sides.begin(), sides.end());
                if(sides[0] + sides[1] > sides[2])
                {
                    count++;
                }
            }
            
        }
        
    }
    
    cout << count << endl;
}