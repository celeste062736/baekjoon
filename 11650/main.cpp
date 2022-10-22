#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct position {
    int x, y;
};

bool compare(position now, position last)
{
    if(now.x > last.x)
        return false;
    if(now.x == last.x)
    {
        if(now.y > last.y)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    struct position arr[100001];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    sort(arr, arr + n, compare);
    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    return 0;
}