#include <cstdio>

void dfs(int i, int depth, int n, int m, int *stack) {
  if (depth == m) {
    for (int j = 0; j < m; j++) {
      printf("%d ", *(stack + j));
    }
    printf("\n");
    return;
  }
  for (int j = i; j <= n; j++) {
    stack[depth] = j;
    dfs(j, depth + 1, n, m, stack);
  }
}

int main() {
  int n, m;
  int stack[8];

  scanf("%d %d", &n, &m);
  dfs(1, 0, n, m, stack);
  return 0;
}