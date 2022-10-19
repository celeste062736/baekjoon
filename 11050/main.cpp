#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int a[10] = {1, 0, 9, 5, 7, 3, 4, 8, 6, 2};
    sort(a, a + 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(a + i));
    }
    return 0;
}