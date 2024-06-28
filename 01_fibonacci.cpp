#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int dp[N];

// 0 1 1 2 3 5 . . . . . . . . . . . .
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n;

    cout << fib(n) << endl;
}

// Step 01 : Brute force reccursion
/*----------------------------------------------------------------

               int fib(int n)
                    {
                        if (n == 0)
                            return 0;
                        if (n == 1)
                            return 1;

                        return fib(n - 1) + fib(n - 2);
                    }

*/

// Step 02 : Memoization
/*----------------------------------------------------------------

               int fib(int n)
                    {
                        if (n == 0)
                            return 0;
                        if (n == 1)
                            return 1;

                        if (dp[n] != -1)
                            return dp[n];   <<------------------

                        return dp[n] = fib(n - 1) + fib(n - 2);  <<------------------
                    }

 */
