#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, sum, temp;
    vector<int> v;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    sum = 0;
    for(int i = 0; i < n; i++)
        sum += v[i] * (n - i);
    printf("%d", sum);
    return 0;
}