#include <cstdio>

int main() {
    int n;
    int temp;
    int cnt = 0;
    int data[10001] = {0, };

    for(int i = 2; i < 1001; i++)
    {
        data[i] = 1;
    }
    for(int i = 2; i < 1001; i++)
    {
        if (data[i] == 0)
            continue;
        for(int j = 2 * i; j < 1001; j += i)
        {
            data[j] = 0;
        }
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if(data[temp] == 1)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}