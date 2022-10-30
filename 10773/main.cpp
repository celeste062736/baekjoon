#include <cstdio>

int main()
{
    int n, index = 0;
    unsigned int sum = 0;
    scanf("%d", &n);
    int *stack = new int[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &stack[index]);
        if(stack[index] == 0)
        {
            if(index == 0)
                index = 0;
            index--;
        }
        else
            index++;
        
    }
    if(index == 0)
        printf("0");
    else
    {
        for(int i = 0; i < index; i++)
            sum += stack[i];
        printf("%d", sum);
    }
    return 0;
}