// QuickSort code
#include <bits/stdc++.h>
using namespace std;

int ar[6] = {8, 4, 6, 3, 2, 9};

int part(int l, int h)
{
    int pivot = ar[l];
    int i = l, j = h;

    while (i < j)
    {
        while (ar[i] <= pivot)
        {
            i++;
        }
        while (ar[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(ar[i], ar[j]);
        }
    }

    swap(ar[j], ar[l]);

    return j;
}
void quickSort(int l, int h)
{
    if (l < h)
    {
        int j = part(l, h); // partition
        quickSort(l, j);
        quickSort(j + 1, h);
    }
}
int main()
{
    ar[6] = INT_MAX;

    int l = 0;
    int h = 6;

    quickSort(l, h);

    for (int i = 0; i < 6; i++)
    {
        cout << ar[i] << ' ';
    }
}