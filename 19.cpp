#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll y1, m1, d1, y2, m2, d2, ans;
bool check()
{
    ll m = (m1 + 10) % 12;
    if (m == 0)
        m = 12;
    ll D = y1 % 100;
    ll C = y1 / 100;
    if (m > 10)
        D--;
    ll f = 1 + (13 * m - 1) / 5 + D + D / 4 + C / 4 - 2 * C;
    f = (f % 7 + 7) % 7;
    if (f == 0)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
        if (!(y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)))
        {
            while (1)
            {
                if (d1 != 1)
                {
                    m1++;
                    d1 = 1;
                }
                if (m1 == 13)
                {
                    m1 = 1;
                    y1++;
                }
                if (check())
                    ans++;
                if ((y1 == y2 && m1 == m2))
                    break;
                m1++;
                if (m1 == 13)
                    m1 = 1, y1++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
