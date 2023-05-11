#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int a = climbStairs(n);
    cout << a << endl;
}