#include <cstdio>
#include <deque>
#include <cstring>
using namespace std;

int main()
{
    int n, temp;
    char buff[30];
    deque<int> dq;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", buff);
        if(!strcmp(buff, "push_front"))
        {
            scanf("%d", &temp);
            dq.push_front(temp);
        }
        else if(!strcmp(buff, "push_back"))
        {
            scanf("%d", &temp);
            dq.push_back(temp);
        }
        else if(!strcmp(buff, "pop_front"))
        {
            if(dq.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", dq.front());
                dq.pop_front();
            }
        }
        else if(!strcmp(buff, "pop_back"))
        {
            if(dq.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", dq.back());
                dq.pop_back();
            }
        }
        else if(!strcmp(buff, "size"))
            printf("%d\n", dq.size());
        else if(!strcmp(buff, "empty"))
            printf("%d\n", dq.empty());
        else if(!strcmp(buff, "front"))
        {
            if(dq.empty())
                printf("-1\n");
            else
                printf("%d\n", dq.front());
        }
        else if(!strcmp(buff, "back"))
        {
            if(dq.empty())
                printf("-1\n");
            else
                printf("%d\n", dq.back());
        }
    }
    return 0;
}