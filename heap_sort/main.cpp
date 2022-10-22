#include <cstdio>

int num = 10;
int heap[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{
    //heapify algorithm
    //max heap
    for(int i = 1; i < num; i++)
    {
        int c = i;
        while(c != 0)
        {
            int root = (c - 1) / 2;
            if(heap[root] < heap[c])
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;
        }
    }

    for(int i = num - 1; i >= 0; i--)
    {
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        int root = 0;
        int c = 1;
        while(c < i)
        {
            c = 2 * root + 1;
            if(heap[c] < heap[c + 1] && c < i - 1)
                c++;
            if(heap[root] < heap[c] && c < i)
            {
                int temp1 = heap[root];
                heap[root] = heap[c];
                heap[c] = temp1;
            }
            root = c;
        }
    }
    for(int i = 0; i < num; i++)
    {
        printf("%d\n", heap[i]);
    }
    return 0;
}