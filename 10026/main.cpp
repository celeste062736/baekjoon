#include <cstdio>
#include <cstdlib>
#include <queue>
#include <utility>

int n;
char **data;
bool **visited;

void bfs(int x, int y)
{
	int cnt;
	int ny, nx;
	char color;
	int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};
	std::queue<std::pair<int, int> > q;
	std::pair<int, int> temp;

	q.push(std::make_pair(x, y));
	color = data[y][x];
	cnt = 1;
	while(cnt > 0)
	{
		temp = q.front();
		q.pop();
		cnt--;
		for(int i = 0; i < 4; i++)
		{
			nx = temp.first + dx[i];
			ny = temp.second + dy[i];
			if(ny >= n || ny < 0 || nx >= n || nx < 0)
				continue;
			if(visited[ny][nx] == 1)
				continue;
			if(visited[ny][nx] == 0 && data[ny][nx] == color)
			{
				visited[ny][nx] = 1;
				q.push(std::make_pair(nx, ny));
				cnt++;
			}
		}
	}
}

void reset()
{
	for (int i = 0; i < n; i++)
    	for (int j = 0; j < n; j++)
      		visited[i][j] = 0;
}

int solve()
{
	int cnt;

	cnt = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(visited[i][j] == 0)
			{
    			bfs(j, i);
				cnt++;
			}
		}
  	}
	reset();
	return cnt;
}

void gtor()
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(data[i][j] == 'G')
    			data[i][j] = 'R';
}

int main()
{
	int rgb, rb;
	char temp[100];

	scanf("%d", &n);
	data = (char **)malloc(sizeof(char *) * n);
  	visited = (bool **)malloc(sizeof(bool *) * n);
	for(int i = 0; i < n; i++)
	{
		*(visited + i) = (bool *)malloc(sizeof(bool *) * n);
	}
	for(int i = 0; i < n; i++)
	{
    	*(data + i) = (char *)malloc(sizeof(char) * n);
		scanf("%s", temp);
		for(int j = 0; j < n; j++)
		{
    		data[i][j] = temp[j];
		}
  	}
	
	rgb = solve();
	gtor();
	rb = solve();
	printf("%d %d", rgb, rb);
	return 0;
}