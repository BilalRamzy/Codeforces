#include<iostream>
#include<cmath>
#include<string>
using namespace std;

    int row[10] = {3, 0, 0, 0, 1, 1, 1, 2, 2, 2};
    int col[10] = {1, 0, 1, 2, 0, 1, 2, 0, 1, 2};

    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        string pin;
        cin >> pin;

        int current_digit = 1;
        int time = 0;

        for(int i = 0; i < 4; i++)
        {
            int target_digit = pin[i] - '0';

            int moves = abs(row[current_digit] - row[target_digit]) +
                        abs(col[current_digit] - col[target_digit]);

            time += moves + 1;

            current_digit = target_digit;
        }
        cout << time << endl;
    }

    return 0;
}