#include <iostream>
#include <map>
using namespace std;
#define ll long long
int N = 13;
int main()
{
    ll fact[N + 1] = {};
    fact[0] = 1;
    for (int i = 1; i < N + 1; i++)
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
        ll i = N, j;
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
                swap(ans[N - 2], ans[N - 1]);
            else
            {
                // The jth character will be at the ith position
                // All the other characters will be moved forward
                i = N - 1 - it->first;
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
