#include <cstdio>
using namespace std;

int main()
{
    int n, temp;
    int *ptr = new int[10001];
    for(int i = 0; i < 10001; i++)
        ptr[i] = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        ptr[temp]++;
    }
    for(int i = 1; i < 10001; i++)
        if(ptr[i] > 0)
            for(int j = 0; j < ptr[i]; j++)
                printf("%d\n", i);
    return 0;
}