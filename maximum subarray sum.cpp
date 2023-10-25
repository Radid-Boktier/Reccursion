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
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    ll mx_sum = INT_MIN;
    // Time Complexity O(N^3)
    for (int start_point = 0; start_point < n; start_point++)
    {
        for (int end_point = start_point; end_point < n; end_point++)
        {
            ll sum = 0;
            for (int i = start_point; i <= end_point; i++)
                sum += ar[i];
            mx_sum = max(mx_sum, sum);
        }
    }
    cout << mx_sum << endl;

    // Time Complexity O(N^2)
    mx_sum = INT_MIN;
    for (int start_point = 0; start_point < n; start_point++)
    {
        ll sum = 0;
        for (int end_point = start_point; end_point < n; end_point++)
        {
            sum += ar[end_point];
            mx_sum = max(mx_sum, sum);
        }
    }
    cout << mx_sum << endl;
    return 0;
}
