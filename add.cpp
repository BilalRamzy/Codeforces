#include<iostream>
using namespace std;

<<<<<<< HEAD
int add(int a,int b)
{
    return a + b;
=======
void add(int a,int b)
{
    int result =  a + b;
    cout << result << endl;
>>>>>>> 1b6bcbe (first commit)
}

int main()
{
    int a,b;
    cin >> a >> b;
<<<<<<< HEAD
    int result = add(a,b);

    cout << result << endl;
=======
    add(a,b);

>>>>>>> 1b6bcbe (first commit)
    return 0;
}