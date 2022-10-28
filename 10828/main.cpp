#include <cstdio>
#include <stack>
using namespace std;

int strcmp(char *str1, char *str2)
{
    int i = 0;
    while(str1[i])
    {
        if(str1[i] != str2[i])
            break;
        i++;
    }
    return (str1[i] - str2[i]);
}

int main()
{
    int n, temp;
    char temp_c;
    char buff[30];
    char str_push[5] = "push";
    char str_pop[4] = "pop";
    char str_size[5] = "size";
    char str_empty[6] = "empty";
    char str_top[4] = "top";
    stack<int> s;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", buff);
        if(!strcmp(buff, str_push))
        {
            scanf("%d", &temp);
            s.push(temp);
        }
        else if(!strcmp(buff, str_pop))
        {
            if(s.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", s.top());
                s.pop();
            }
        }
        else if(!strcmp(buff, str_size))
            printf("%d\n", s.size());
        else if(!strcmp(buff, str_empty))
            printf("%d\n", s.empty());
        else if(!strcmp(buff, str_top))
        {
            if(s.empty())
                printf("-1\n");
            else
                printf("%d\n", s.top());
        }
    }
    return 0;
}