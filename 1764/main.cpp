#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool strcmp(char *str1, char *str2)
{
    int i;
    for(i = 0; *(str1 + i); i++)
        if(*(str1 + i) != *(str2 + i))
            return 0;
    if(*(str1 + i) != *(str2 + i))
        return 0;
    return 1;
}

bool compare(char *now, char *next)
{
    int i;
    for(i = 0; *(now + i); i++)
        if(*(now + i) != *(next + i))
            break;
    return *(now + i) < *(next + i);
}

int main()
{
    int n, m;
    char *temp;
    vector<char *> v;
    vector<char *> ans;

    scanf("%d %d", &n, &m);
    for(int i = 0; i < n + m; i++)
    {
        temp = new char[21];
        scanf("%s", temp);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i < n + m - 1; i++)
        if(strcmp(v[i], v[i + 1]))
            ans.push_back(v[i]);
    printf("%d\n", ans.size());
    for(auto iter = ans.begin(); iter != ans.end(); iter++)
        printf("%s\n", *iter);
    return 0;
}