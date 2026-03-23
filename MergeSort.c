#include <stdio.h>

void MERGE(int T[], int start, int mid, int end)
{
    int i, j, k;
    int temp[100];

    i = start;
    j = mid + 1;
    k = start;

    while(i <= mid && j <= end)
    {
        if(T[i] <= T[j])
        {
            temp[k] = T[i];
            i++;
        }
        else
        {
            temp[k] = T[j];
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        temp[k] = T[i];
        i++;
        k++;
    }

    while(j <= end)
    {
        temp[k] = T[j];
        j++;
        k++;
    }

    for(i = start; i <= end; i++)
    {
        T[i] = temp[i];
    }
}

void MERGESORT(int T[], int start, int end)
{
    int mid;

    if(start < end)
    {
        mid = (start + end) / 2;

        MERGESORT(T, start, mid);
        MERGESORT(T, mid + 1, end);

        MERGE(T, start, mid, end);
    }
}

int main()
{
    int T[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &T[i]);

    MERGESORT(T, 0, n-1);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", T[i]);

    return 0;
}