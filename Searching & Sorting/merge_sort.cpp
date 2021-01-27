

#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

void merge(int arr[], int l, int m, int r)
{
        int n1 = (m - l) + 1;
        int n2 = (r - m);
        int a1[n1], a2[n2];

        for (int i = 0; i < n1; i++)
        {
                a1[i] = arr[l + i];
        }
        for (int i = 0; i < n2; i++)
        {
                a2[i] = arr[m + 1 + i];
        }
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
                if (a1[i] < a2[j])
                {
                        arr[k] = a1[i];
                        k++, i++;
                }
                else
                {
                        arr[k] = a2[j];
                        k++, j++;
                }
        }
        while (i < n1)
        {
                arr[k] = a1[i];
                i++, k++;
        }
        while (j < n2)
        {
                arr[k] = a2[j];
                k++, j++;
        }
}

void merge_sort(int arr[], int l, int r)
{
        if (l < r)
        {
                int mid = (l + r) / 2;
                merge_sort(arr, l, mid);
                merge_sort(arr, mid + 1, r);

                merge(arr, l, mid, r);
        }
}

int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin >> n;
                int arr[n];

                for (int i = 0; i < n; i++)
                {
                        cin >> arr[i];
                }

                merge_sort(arr, 0, n - 1);
                print(arr, n);
        }
}
