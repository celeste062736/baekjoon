#include <cstdio>
#include <stack>
using namespace std;

int main()
{
    int n, data, remain, cnt, index, next;

    scanf("%d", &n);

    while(n-- > 0)
    {
        stack<int> s;
        remain = 0;
        cnt = 1;

        scanf("%d", &data);
        index = data - 1;

        for(int i = 0; i < data; i++)
            s.push(1);

        while(index >= 0)
        {
            next = s.top() + 1;
            remain += s.top();
            s.pop();
            index--;

            if(next > 3)
            {
                continue;
            }

            if(next <= remain)
            {
                s.push(next);
                remain -= next;
                index++;
                while(remain > 0)
                {
                    s.push(1);
                    index++;
                    remain--;
                }
            }

            if(remain == 0)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}