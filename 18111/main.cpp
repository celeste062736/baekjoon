#include <cstdio>

int main()
{
    int m, n, b, to_add, to_destroy, n_time, ans;
    int min_time = 2147483647;

    scanf("%d %d %d", &m, &n, &b);
    int *data = new int[m * n];
    for(int i = 0; i < (m * n); i++)
        scanf("%d", data + i);
    for(int target = 0; target <= 256; target++)
    {
        to_add = 0;
        to_destroy = 0;
        for(int i = 0; i < (m * n); i++)
        {
            if(*(data + i) >= target)
                to_destroy += *(data + i) - target;
            else
                to_add += target - *(data + i);
        }
        if(to_destroy + b >= to_add)
        {
            n_time = to_destroy * 2 + to_add;
            if(n_time <= min_time)
            {
                min_time = n_time;
                ans = target;
            }
        }
    }
    printf("%d %d", min_time, ans);
}