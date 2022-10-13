#include <cstdio>

int main()
{
    int n;
    int i, cnt, temp;

    i = 665;
    cnt = 0;
    scanf("%d", &n);
    while (cnt < n)
    {
        i++;
        temp = i;
        while (temp >= 666)
        {
            if (temp % 1000 == 666)
            {
                cnt++;
                break;
            }
            temp /= 10;
        }
    }
    printf("%d", i);
    return 0;
}