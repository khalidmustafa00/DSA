#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solvingusingspaceopt(int n, int k)
{
    int prev2 = k;
    int prev1 = k + k * (k - 1);

    for (int i = 3; i <= n; i++)
    {
        int curr = (prev1 + prev2) * (k - 1);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
int solvingusingtab(int n, int k, vector<int> &dp)
{
    dp[1] = k;
    dp[2] = k + k * (k - 1);
    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) * (k - 1);
    }
    return dp[n];
}
int solvingbydp(int n, int k, vector<int> &dp)
{
    if (n == 1)
        return k;
    if (n == 2)
    {
        return k + k * (k - 1);
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = (solvingbydp(n - 2, k, dp) + solvingbydp(n - 1, k, dp)) * (k - 1);
    return dp[n];
}
int solveusingrecursion(int n, int k)
{
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k + k * (k - 1);
    }
    int ans = (solveusingrecursion(n - 2, k) + solveusingrecursion(n - 1, k)) * (k - 1);
    return ans;
}
int main()
{
    cout << "Enter the number of Fence" << endl;
    int n;
    cin >> n;
    cout << "Enter the number of colour" << endl;
    int k;
    cin >> k;
    // vector<int> dp(n + 1, -1);
    // int ans = solvingbydp(n, k, dp);
    // int ans = solveusingrecursion(n, k);
    // int ans = solvingusingtab(n, k, dp);
    int ans = solvingusingspaceopt(n, k);

    cout
        << ans << endl;
    return 0;
}