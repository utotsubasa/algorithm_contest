#include <bits/stdc++.h>

using namespace std;

string solver(int l, int r);

int main()
{
    int l, r;
    cin >> l >> r;

    string result = solver(l, r);

    cout << result << endl;
}

string solver(int l, int r)
{
    int raise_right = r == 1;
    int raise_left = l == 1;
    if (raise_left and not raise_right)
    {
        return "Yes";
    }
    else if ((not raise_left) and raise_right)
    {
        return "No";
    }
    return "Invalid";
}
