#include <cstdio>

int main()
{
    int n;
    int temp;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        data[temp] = 1;
    }
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if(data[temp] == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}