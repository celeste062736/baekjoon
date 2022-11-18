#include <cstdio>

int goal_r, goal_c;
int cnt = 0;

void dfs(int square, int r, int c)
{
    if(goal_r == r && goal_c == c)
    {
        return;
    }

    if(square == 1)
    {
        cnt++;
        return;
    }

    square /= 2;
    if(goal_c >= c + square && goal_r >= r + square)
    {
        cnt += square * square * 3;
        dfs(square, r + square, c + square);
        return;
    }
    if(goal_c >= c + square)
    {
        cnt += square * square;
        dfs(square, r, c + square);
        return;
    }
    if(goal_r >= r + square)
    {
        cnt += square * square * 2;
        dfs(square, r + square, c);
        return;
    }
    dfs(square, r, c);
}

void solve(int depth, int r, int c)
{
    int square = 1;

    for(int i = 0; i < depth; i++)
        square *= 2;

    goal_r = r;
    goal_c = c;

    dfs(square, 0, 0);
}

int main()
{
    int n, r, c;

    scanf("%d %d %d", &n, &r, &c);

    solve(n, r, c);

    printf("%d", cnt);
    return 0;
}