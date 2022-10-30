#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int *now, int *last)
{
    if(now[1] > last[1])
        return 0;
    if(now[1] == last[1])
        if(now[0] > last[0])
            return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int **data = new int*[n];

    for(int i = 0; i < n; i++)
    {
        int *arr = new int[2];
        data[i] = arr;
        scanf("%d %d", &data[i][0], &data[i][1]);
    }
    sort(data, data + n, compare);
    for(int i = 0; i < n; i++)
        printf("%d %d\n", data[i][0], data[i][1]);
    return 0;
}