#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int n, m,temp;
    map<int, int> mp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        auto iter = mp.insert(pair<int, int>(temp,1));
        if(!iter.second)
            iter.first->second++;
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &temp);
        printf("%d ", mp[temp]);
    }
    return 0;
}