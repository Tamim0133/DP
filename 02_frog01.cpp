
/* 01/ Brute Force Recursion



#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int h[N];

int func(int i)
{
    if (i == 0)
        return 0;

    int cost = INT_MAX;

    cost = min(cost, func(i - 1) + abs(h[i] - h[i - 1]));
    if (i > 1)
        cost = min(cost, func(i - 2) + abs(h[i] - h[i - 2]));

    return cost;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> h[i];

    cout << func(n - 1) << endl;
}

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int dp[N];
int h[N];

int func(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int y = INT_MAX;

    int x = func(i - 1) + abs(h[i] - h[i - 1]);

    if (i > 1)
        y = func(i - 2) + abs(h[i] - h[i - 2]);

    return dp[i] = min(x, y);
}
int main()
{
    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> h[i];

    cout << func(n - 1) << endl;
}
