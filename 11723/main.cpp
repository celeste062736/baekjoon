#include <cstdio>

int main()
{
    int m, temp;
    bool data[21] = {0};
    char oper[8];

    scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%s", oper);
        if(oper[1] == 'd')
        {
            scanf("%d", &temp);
            data[temp] = 1;
        }
        else if(oper[0] == 'r')
        {
            scanf("%d", &temp);
            data[temp] = 0;
        }
        else if(oper[0] == 'c')
        {
            scanf("%d", &temp);
            printf("%d\n", data[temp]);
        }
        else if(oper[0] == 't')
        {
            scanf("%d", &temp);
            if(data[temp])
                data[temp] = 0;
            else
                data[temp] = 1;
        }
        else if(oper[1] == 'l')
        {
            for(int j = 1; j < 21; j++)
                data[j] = 1;
        }
        else if(oper[0] == 'e')
        {
            for(int j = 1; j < 21; j++)
                data[j] = 0;
        }
    }
    return 0;
}