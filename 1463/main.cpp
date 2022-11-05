#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int find_min(int i, int *dp)
{
    vector<int> v;

    if(i % 3 == 0)
    {
        v.push_back(dp[i / 3] + 1);
    }
    if(i % 2 == 0)
    {
        v.push_back(dp[i / 2] + 1);
    }
    v.push_back(dp[i - 1] + 1);
    sort(v.begin(), v.end());
    return v[0];
}

int main()
{
    int n;
    int *dp = new int[1000001];

    dp[1] = 0;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        dp[i] = find_min(i, dp);
    }

    printf("%d\n", dp[n]);
    return 0;
}