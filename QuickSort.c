#include<stdio.h>
void quick_sort(int a[], int l, int h)
{
    if(l >= h)
    {
        return;
    }
    int pivot = h, LIndex = 0, Rindex = 0;
    int left[h], right[h];
    for(int i=l; i<h; i++)
    {
        if(a[i] < a[pivot])
        {
            left[LIndex] = a[i];
            LIndex++;
        }
        else
        {
            right[Rindex] = a[i];
            Rindex++;
        }
    }
    quick_sort(left, 0, LIndex-1);
    quick_sort(right, 0, Rindex-1);
    int i;
    for(i=0; i<LIndex; i++)
    {
        a[i] = left[i];
    }
    a[i] = a[pivot];
    for(int j=0; j<Rindex; j++)          
    {
        a[i+j+1] = right[j];
    }
}
 main()
{
    int n;
    scanf("%d", &n); 
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, n-1);
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
}