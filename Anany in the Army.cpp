#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>


using namespace std;


double calculateTriangleArea(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;

    // Heron's formula
    double area = sqrt(s* (s-a) * (s-b) * (s-c));

    return area;
}

double solve(int a, int b, int c, int k)
{
    double area1 = calculateTriangleArea(a + k, b, c);
    double area2 = calculateTriangleArea(a , b + k, c);
    double area3 = calculateTriangleArea(a , b, c + k);

    return max({area1, area2, area3});
}


int main()
{
    cout << fixed << setprecision(9);
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, k;
        cin >> a >> b >> c >> k;

        double maxArea = solve(a, b, c, k);

        cout << maxArea << endl;
    }
    
}