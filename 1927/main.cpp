#include <cstdio>

void insert(int *heap, int data, int len)
{
    int root;
    int c = len;

    heap[c] = data;

    while(c != 0)
    {
        root = (c - 1) / 2;
        if(heap[c] < heap[root])
        {
            int temp = heap[root];
            heap[root] = heap[c];
            heap[c] = temp;
        }
        c = root;
    }
}

void del(int *heap, int len)
{
    int temp = heap[0];
    heap[0] = heap[len];
    heap[len] = heap[0];

    int root = 0;
    int c = 2 * root + 1;
    while(c < len)
    {
        c = 2 * root + 1;
        if(heap[c] > heap[c + 1] && c < len - 1)
            c++;
        if(heap[root] > heap[c] && c < len)
        {
            temp = heap[root];
            heap[root] = heap[c];
            heap[c] = temp;
        }
        root = c;
    }
}

int main()
{
    int n, temp, index;
    int *heap = new int[200000];

    index = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);

        if(temp > 0)
        {
            insert(heap, temp, index);
            index++;
        }
        else
        {
            if(index == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("%d\n", heap[0]);
                index--;
                del(heap, index);
            }
        }
    }
    delete heap;
    return 0;
}