#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m,count=0;
    cin >> n >> m;
    for (int i = min(n, m);i<=max(n,m);i++)
    {
        int num = i;
        bool flag = true;
        while (num)
        {
            
            if (num % 10 != 4 && num % 10 != 7)
            {
                flag = false;
                break;
            }
            num /= 10;
        }
        if (flag)
        {
            count++;
            cout << i << " ";
        }
    }
    if (!count)
    {
        cout << -1;
    }

    return 0;
}
