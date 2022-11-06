#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, temp;
    int *data = new int[1000000];
    vector<int> v;

    scanf("%d", &n);
    v.reserve(1000000);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", data + i);
        v.push_back(*(data + i));
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < n; i++)
    {
        printf("%d ", lower_bound(v.begin(), v.end(), data[i]) - v.begin());
    }
    return 0;
}