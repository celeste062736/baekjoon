#include <cstdio>

int main() {
    int n;
    int temp;
    int a[1000000][2];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d %d", &a[i][0], &a[i][1]);
    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", a[i][0], a[i][1]);
    }
    return 0;
}