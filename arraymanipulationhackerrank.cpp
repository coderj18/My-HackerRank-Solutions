/*Array Manipulation Hackerrank solved by Jayneel at 19:45, 5-7-21 with the help of new concept on YT video course of CP
New Method learnt about a different usage of prefix sum*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
long long int arr[N];

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        arr[a] += d;
        arr[b + 1] -= d;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }
    long long max = -1;
    for (int i = 1; i <= n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << max << endl;
}