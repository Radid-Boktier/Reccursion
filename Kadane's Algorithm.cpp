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

int main()
{
    optimize();
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    ll mx_sum = LONG_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
        mx_sum = max(mx_sum, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << mx_sum << endl;
    return 0;
}
