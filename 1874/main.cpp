#include <cstdio>
#include <stack>
#include <vector>

int main() {
  int n, temp, idx = 0;
  std::vector<char> result;
  std::stack<int> s;

  scanf("%d", &n);
  int *ptr = new int[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", ptr + i);
  }
  int i = 1;
  while (idx < n && i <= n) {
    s.push(i++);
    result.push_back('+');
    while (!s.empty() && ptr[idx] == s.top()) {
      s.pop();
      result.push_back('-');
      idx++;
    }
  }
  if (s.empty()) {
    for (auto j = result.begin(); j != result.end(); ++j)
      printf("%c\n", *j);
  } else
    printf("NO");
  return 0;
}