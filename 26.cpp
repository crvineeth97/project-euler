#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

bool isPrime[10005] = {};
int ans[10005] = {};

ll modPowIter(ll a, ll b, ll c)
{
    ll res = 1;
    while (b != 0)
    {
        if (b % 2 == 1)
            res = (res * a) % c;
        a = (a * a) % c;
        b /= 2;
    }
    return res;
}

bool isRepPrime(int n)
{
    if (!isPrime[n])
        return false;
    for (int i = 1; i < n; i++)
        if (modPowIter(10, i, n) == 1 && i != n - 1)
            return false;
    return true;
}

int main()
{
    // Largest Full Reptend Primes less than N is the solution
    // 4 <= N <= 10000
    for (int i = 0; i < 10001; i++)
        isPrime[i] = true;
    for (int i = 2; i <= 100; i++)
        if (isPrime[i])
            for (int j = i * i; j < 10001; j += i)
                isPrime[j] = false;
    ans[3] = 3;
    ans[4] = 3;
    ans[5] = 3;
    for (int i = 6; i < 10001; i++)
    {
        if (isRepPrime(i))
            ans[i] = i;
        else
            ans[i] = ans[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ans[n - 1] << '\n';
    }
    return 0;
}