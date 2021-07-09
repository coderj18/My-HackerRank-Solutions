/*#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int arr[N];
int f[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        f[arr[i]]++;
    }
    int fmax = -1;
    for (int i = 1; i <= n; i++)
    {
        if (f[i] != 0)
        {
            if (fmax < f[i])
            {
                fmax = f[i];
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (f[i] != 0)
        {
            sum += f[i];
        }
    }

    cout << sum - fmax << endl;
}*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int max = arr[0], b = 1, maxi = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == max)
        {
            b++;
            if (b > maxi)
            {
                maxi = b;
            }
        }
        else
        {
            max = arr[i];
            b = 1;
        }
    }
    cout << n - maxi << endl;
}