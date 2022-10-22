#include <cstdio>
#include <queue>
using namespace std;

int main()
{
    int n, k, temp;
    queue<int> q;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        q.push(i);
    scanf("%d", &k);
    printf("<");
    while(n--)
    {
        for(int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        printf("%d", q.front());
        q.pop();
        if(n > 0)
            printf(", ");
        else
            printf(">");
    }
    return 0;
}