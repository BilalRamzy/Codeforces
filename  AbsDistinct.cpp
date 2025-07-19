#include<bits/stdc++.h>

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
    
    int left = 0;
    int right = n -1;
    int count = 0;

    while (left <= right)
    {
        int leftAbs = abs(a[left]);
        int rightAbs = abs(a[right]);

        if(leftAbs == rightAbs)
        {
            count++;
            int currentAbs = leftAbs;


            while (left <= right && abs(a[left]) == currentAbs)
            {
                left++;
            }

             while (left <= right && abs(a[right])== currentAbs)
            {
                right--;
            }
            
        } else if(leftAbs < rightAbs)
        {
            count++;

            int currntAbs = rightAbs;

            while (left <= right && abs(a[right]) == currntAbs)
            {
                right--;
            }
        }
        else {
            count++;
            int currentAbs = leftAbs;
            while (left <= right && abs(a[left]) == currentAbs)
            {
                left++;
            }
        }
        
    }
    
    cout << count << endl;

    return 0;
}