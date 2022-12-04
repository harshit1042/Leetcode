#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y = x;
    long long int rev = 0;
    if (x < 0)
        return false;
    // cout << "false" << endl;
    else
    {
        while (y)
        {
            rev = rev * 10 + y % 10;
            y /= 10;
        }
        if (rev == x)
            return true;
        // cout << "true" << endl;
        else
        {
            return false;
            // cout << "false" << endl;
        }
    }
    // return rev = x;
}