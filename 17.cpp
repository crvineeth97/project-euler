#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
vector<string> ans;
void solve(ll n)
{
    int cnt = 0;
    while (n)
    {
        if (cnt == 1 && n % 1000 != 0)
            ans.pb("Thousand");
        if (cnt == 2 && n % 1000 != 0)
            ans.pb("Million");
        if (cnt == 3 && n % 1000 != 0)
            ans.pb("Billion");
        if (cnt == 4 && n % 1000 != 0)
            ans.pb("Trillion");
        int l = (n % 100) / 10, p = n % 10;
        if (l == 1)
        {
            if (p == 0)
                ans.pb("Ten");
            if (p == 1)
                ans.pb("Eleven");
            if (p == 2)
                ans.pb("Twelve");
            if (p == 3)
                ans.pb("Thirteen");
            if (p == 4)
                ans.pb("Fourteen");
            if (p == 5)
                ans.pb("Fifteen");
            if (p == 6)
                ans.pb("Sixteen");
            if (p == 7)
                ans.pb("Seventeen");
            if (p == 8)
                ans.pb("Eighteen");
            if (p == 9)
                ans.pb("Nineteen");
        }
        else
        {
            if (p == 1)
                ans.pb("One");
            if (p == 2)
                ans.pb("Two");
            if (p == 3)
                ans.pb("Three");
            if (p == 4)
                ans.pb("Four");
            if (p == 5)
                ans.pb("Five");
            if (p == 6)
                ans.pb("Six");
            if (p == 7)
                ans.pb("Seven");
            if (p == 8)
                ans.pb("Eight");
            if (p == 9)
                ans.pb("Nine");
            if (l == 2)
                ans.pb("Twenty");
            if (l == 3)
                ans.pb("Thirty");
            if (l == 4)
                ans.pb("Forty");
            if (l == 5)
                ans.pb("Fifty");
            if (l == 6)
                ans.pb("Sixty");
            if (l == 7)
                ans.pb("Seventy");
            if (l == 8)
                ans.pb("Eighty");
            if (l == 9)
                ans.pb("Ninety");
        }
        p = (n % 1000) / 100;
        if (p != 0)
            ans.pb("Hundred");
        if (p == 1)
            ans.pb("One");
        if (p == 2)
            ans.pb("Two");
        if (p == 3)
            ans.pb("Three");
        if (p == 4)
            ans.pb("Four");
        if (p == 5)
            ans.pb("Five");
        if (p == 6)
            ans.pb("Six");
        if (p == 7)
            ans.pb("Seven");
        if (p == 8)
            ans.pb("Eight");
        if (p == 9)
            ans.pb("Nine");
        cnt++;
        n /= 1000;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans.clear();
        ll n;
        cin >> n;
        if (n == 0)
            cout << "Zero\n";
        else
        {
            solve(n);
            for (int i = ans.size() - 1; i; i--)
                cout << ans[i] << ' ';
            cout << ans[0] << '\n';
        }
    }
    return 0;
}
