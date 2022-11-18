#include <cstdio>
#include <algorithm>
using namespace std;

void dfs(int i, int depth, int n, int m, int *stack, int *num) {
  if (depth == m) {
    for (int j = 0; j < m; j++) {
      printf("%d ", *(stack + j));
    }
    printf("\n");
    return;
  }
  for (int j = i; j <= n; j++) {
    stack[depth] = num[j - 1];
    dfs(j, depth + 1, n, m, stack);
  }
}

int main() {
  int n, m;
  int stack[8];
  int num[8];

  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++)
  {
    scanf("%d", num + i);
  }
  sort(num, num + n);
  dfs(1, 0, n, m, stack, num);
  return 0;
}