#include<iostream>
#include<vector>
<<<<<<< HEAD
#include<algorithms>
=======
#include<algorithm>
>>>>>>> 1b6bcbe (first commit)
using namespace std;




int main()
{
    int n, q; cin >> n >> q;
    

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while(q--)
    {
        int x; cin >> x;

<<<<<<< HEAD
        if(binary_search(a.begin(), a.end(), x)
=======
        if(binary_search(a.begin(), a.end(), x))
>>>>>>> 1b6bcbe (first commit)
        {
            cout << "found" << endl;        
        } else {
        cout << "not found" << endl;
        }

    }
    return 0;

}
