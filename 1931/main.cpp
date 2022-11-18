#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

bool compare(pair<int, int> now, pair<int, int> next)
{
    if(now.second == next.second)
    {
        return now.first < next.first;
    }
    return now.second < next.second;
}

int solve(vector<pair<int, int> > &v, int n)
{
    int cnt, last;

    sort(v.begin(), v.end(), compare);
    cnt = 1;
    last = v[0].second;
    for(int i = 1; i < n; i++)
    {
        if(last <= v[i].first)
        {
            cnt++;
            last = v[i].second;
        }
    }

    return cnt;
}

int main()
{
    int n;
    vector<pair<int, int> > v;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int temp1, temp2;

        scanf("%d %d", &temp1, &temp2);
        v.push_back(make_pair(temp1, temp2));
    }

    printf("%d", solve(v, n));
    return 0;
}