#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int c = 0;

void merge(vector<int> &arr1, int s, int m, int e)
{
    vector<int> mix((e - s));
    int s1 = s;
    int e1 = e;
    int m1 = m + 1;
    int k = 0;
    while (s1 <= m && m1 < e)
    {
        if (arr1[s1] < arr1[m1])
        {
            mix[k] = arr1[s1];
            s1++;

            k++;
        }
        else
        {
            mix[k] = arr1[m1];
            m1++;

            k++;
        }
    }
    while (s1 <= m)
    {
        mix[k] = arr1[s1];
        s1++;

        k++;
    }

    while (m1 < e)
    {
        mix[k] = arr1[m1];
        m1++;

        k++;
    }

    for (auto val : mix)
    {
        if (arr1[s] != val)
        {
            c++;
        }
        arr1[s] = val;
        s++;
    }
}

void mergesort(vector<int> &arr, int s, int e)
{

    int m = (s + e) / 2;
    if (e - s == 1)
    {
        return;
    }
    mergesort(arr, s, m);
    mergesort(arr, m, e);
    merge(arr, s, m, e);
}

int main()
{
    fastio;
    vector<int> arr = {2, 4, 1, 3, 5};
    mergesort(arr, 0, 5);
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << c << " ";
    return 0;
}