#include <stdio.h>
void merge_sort(int arr[], int sz)
{
    if (sz <= 1)
        return;
    int mid = sz / 2;
    int l[mid]; 
    int r[sz - mid];
    for (int i = 0; i < mid; i++)
    {
        l[i] = arr[i];
    }
    for (int i = mid; i < sz; i++)
    {
        r[i-mid] = arr[i];
    }
    merge_sort(l, mid);
    merge_sort(r, sz - mid);
    merge(arr, l, mid, r, sz - mid);
}
void merge(int arr[], int l[], int lsz, int r[], int rsz)
{
    int i = 0, j = 0, k = 0;
    while (i < lsz && j < rsz)
    {
        if (l[i] < r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < lsz)
    {
        arr[k] = l[i];
        k++;
        i++;
    }
    while (j < rsz)
    {
        arr[k] = r[j];
        k++;
        j++;
    }
}

 main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

