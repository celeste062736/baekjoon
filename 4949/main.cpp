#include <iostream>
#include <string>
using namespace std;

int main()
{
    int index, flag;
    string arr;
    char stack[101];
    getline(cin, arr);
    while(arr[0] != '.')
    {
        flag = 1;
        index = -1;
        for(int i = 0; arr[i] != '.'; i++)
        {
            if(arr[i] == '(' || arr[i] == '[')
                stack[++index] = arr[i];
            else if(arr[i] == ')' || arr[i] == ']')
            {
                if(index < 0 || (arr[i] == ')' && stack[index] != '(') || (arr[i] == ']' && stack[index] != '['))
                {
                    flag = 0;
                    break;
                }
                index--;
            }
        }
        if(flag && index < 0)
            cout << "yes\n";
        else
            cout << "no\n";
        getline(cin, arr);
    }
    return 0;
}