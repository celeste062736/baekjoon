#include <cstdio>
#include <queue>
using namespace std;

int main()
{
    int t, n, m, temp, max, cnt;
    int imp[10] = {0};

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        queue<int> q;
        for(int j = 0; j < 10; j++)
            imp[j] = 0;
        scanf("%d %d", &n, &m);
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &temp);
            q.push(temp);
            imp[temp]++;
        }
        max = 9;
        cnt = 0;
        while(true)
        {
            while(imp[max] == 0 && max > 0)
                max--;
            if(q.front() == max)
            {
                cnt++;
                if(m == 0)
                    break;
                q.pop();
                imp[max]--;
                n--;
                m--;
            }
            else
            {
                q.push(q.front());
                q.pop();
                m--;
                if(m < 0)
                    m += n;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}