#include <cstdio>
#include <stack>
#include <queue>
#include <tuple>
using namespace std;

stack<tuple<int, int, int> > s;
queue<tuple<int, int> > q;

void divide(int n, int **data)
{
    int cnt = 0;

    s.push(make_tuple(0, 0, n));
    cnt++;
    while(cnt > 0)
    {
        int y = get<0>(s.top());
        int x = get<1>(s.top());
        int side_len = get<2>(s.top()) / 2;

        s.pop();
        cnt--;

        if(side_len >= 1)
        {
            s.push(make_tuple(y, x, side_len));
            s.push(make_tuple(y, x + side_len, side_len));
            s.push(make_tuple(y + side_len, x, side_len));
            s.push(make_tuple(y + side_len, x + side_len, side_len));
            cnt += 4;
        }
        else
        {
            if(data[y][x])
            {
                q.push(make_tuple(1, 0));
            }
            else
            {
                q.push(make_tuple(0, 1));
            }
        }
    }
}

void merge()
{
    int cnt, b_paper_cnt, w_paper_cnt;

    cnt = q.size();
    while(cnt != 1)
    {
        b_paper_cnt = 0;
        w_paper_cnt = 0;
        for(int i = 0; i < 4; i++)
        {
            b_paper_cnt += get<0>(q.front());
            w_paper_cnt += get<1>(q.front());
            q.pop();
            cnt--;
        }
        if(b_paper_cnt == 4 && w_paper_cnt == 0)
        {
            b_paper_cnt = 1;
            w_paper_cnt = 0;
        }
        else if(b_paper_cnt == 0 && w_paper_cnt == 4)
        {
            b_paper_cnt = 0;
            w_paper_cnt = 1;
        }
        q.push(make_tuple(b_paper_cnt, w_paper_cnt));
        cnt++;
    }
}

int main()
{
    int n;
    int **data;

    scanf("%d", &n);
    data = new int *[n];
    for(int i = 0; i < n; i++)
    {
        int *temp = new int[n];
    
        *(data + i) = temp;
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }

    divide(n, data);
    merge();
    printf("%d\n%d", get<1>(q.front()), get<0>(q.front()));
    return 0;
}