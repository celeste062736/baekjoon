#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int temp;
    int a[1000000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", a + i);
    sort(a, a + n);
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}