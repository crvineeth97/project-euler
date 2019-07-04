#include <iostream>
#include <map>
using namespace std;
#define ll long long
int main()
{
    ll fact[14] = {};
    fact[0] = 1;
    for (int i = 1; i < 14; i++)
        fact[i] = fact[i - 1] * i;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n -= 1;
        // How many times a particular factorial is present in N
        map<ll, ll> cnt = {};
        ll i = 13, j;
        while (n > 0)
        {
            if (n >= fact[i])
            {
                cnt[i]++;
                n -= fact[i];
            }
            else
                i--;
        }
        string ans = "abcdefghijklm", tmp;
        for (auto it = cnt.rbegin(); it != cnt.rend(); it++)
        {
            if (it->first == 1)
                swap(ans[11], ans[12]);
            else
            {
                // The jth character will be at the ith position
                // All the other characters will be moved forward
                i = 12 - it->first;
                j = i + it->second;
                tmp = ans[j] + '\0';
                ans.erase(j, 1);
                ans.insert(i, tmp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
