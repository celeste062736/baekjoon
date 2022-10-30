#include <cstdio>

int main()
{
    int n, place = 1;
    scanf("%d", &n);
    int **data = new int*[n];

    for(int i = 0; i < n; i++)
    {
        int *arr = new int[2];
        data[i] = arr;
        scanf("%d %d", &data[i][0], &data[i][1]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            if((data[i][0] < data[j][0]) && (data[i][1] < data[j][1]))
                place++;
        printf("%d ", place);
        place = 1;
    }

    return 0;
}