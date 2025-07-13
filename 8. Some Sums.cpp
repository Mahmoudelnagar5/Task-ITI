#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, a, b,ans=0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int num = i;
        while (num)
        {
            sum += (num % 10);
            num /= 10;
        }
        if (sum >= a && sum <= b)
        {
            ans += i;
      }
    }
    cout << ans;

    return 0;
}



   
