#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;

    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        int temp = i;
        int dis = 0;

        for(int j = 2; j <= temp; j++)
        {
            if(temp % j == 0)
            {
                dis++;
                while(temp % j == 0)
                {
                    temp /= j;
                }
            }
        }
        if(dis == 2)
        {
            count++;
        }
    }
    cout << count << endl;
}
