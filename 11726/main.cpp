#include <cstdio>

int main()
{
    int n;
    int dp[1001] = {0, 1, 2};

    for(int i = 3; i < 1001; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }

    scanf("%d", &n);
    printf("%d", dp[n]);
    return 0;
}