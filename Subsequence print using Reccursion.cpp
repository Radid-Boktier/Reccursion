#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

#define MOD 1000000007
const double PI = acos(-1);
const int MX = 1e7 + 123;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

const int mx = 1e5 + 123;

// Subsequence print using Reccursion

void solve(int ind, vector<int> &v, int ar[], int n)
{
    if (ind >= n)
    {
        for (auto u : v)
            cout << u << " ";
        if (v.empty())
            cout << "{}";
        cout << endl;
        return;
    }
    v.push_back(ar[ind]);
    solve(ind + 1, v, ar, n);
    v.pop_back();
    solve(ind + 1, v, ar, n);
    return;
}
int main()
{
    optimize();
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    vector<int> v;
    solve(0, v, ar, n);
    return 0;
}
