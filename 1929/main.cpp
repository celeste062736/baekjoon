#include <cstdio>

int main()
{
    int m, n;
    int *ptr = new int[1000001];

    scanf("%d %d", &m, &n);
    for(int i = 0; i < 1000001; i++)
        ptr[i] = 1;
    ptr[1] = 0;
    for(int i = 2; i <= 1000; i++)
        for(int j = 2; i * j <= 1000000; j++)
            ptr[i * j] = 0;
    for(int i = m; i <= n; i++)
        if(ptr[i])
            printf("%d\n", i);
    return 0;
}