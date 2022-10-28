#include <cstdio>
#include <algorithm>

int main()
{
    int n, m, temp, flag, left, right, mid;
    int data[100010];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d ", data + i);
    std::sort(data, data + n);
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &temp);
        flag = 0;
        left = 0;
        right = n - 1;
        while(left <= right)
        {
            mid = (left + right) / 2;
            if(data[mid] == temp)
            {
                flag = 1;
                break;
            }
            else if(data[mid] > temp)
                right = mid - 1;
            else
                left = mid + 1;
        }
        printf("%d\n", flag);
    }
    return 0;
}