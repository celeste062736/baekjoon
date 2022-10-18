#include <cstdio>

char p[100001][102];
int b[100001];

int main()
{
    int n, temp;
    int a[201] = {0, };

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %s", b + i, p + i);
        a[b[i]]++;
    }
    temp = 1;
    while(temp < 201)
    {
        for(int i = 0; i < n && a[temp]; i++)
        {
            if(b[i] == temp)
            {
                a[temp]--;
                printf("%d %s\n", temp, p + i);
            }
        }
        while(!a[temp])
            temp++;
    }
    return 0;
}