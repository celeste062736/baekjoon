#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n;
    char arr[50];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int j = 0, vps = 1;
        scanf("%s", arr);
        vector<char> v;
        v.reserve(50);
        while(arr[j])
        {
            if(arr[j] == '(')
                v.push_back('(');
            else if(arr[j] == ')' && v.back() == '(')
                v.pop_back();
            else
            {
                vps = 0;
                break;
            }
            j++;
        }
        if(vps && v.empty())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}