#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i = 0;
    while (i < t)
    {
        int x, y;
        cin >> x >> y;
        long long a = (long long)x * y;
        cout << a / 2 << endl;
        i++;
    }
    return 0;
}
