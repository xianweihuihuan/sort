void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void quicksort(int *arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int key = arr[left];
    int cur = left + 1;
    int le = left;
    int ri = right;
    while (cur <= right)
    {
        if (arr[cur] < key)
        {
            swap(&arr[left], &arr[cur]);
            left++;
            cur++;
        }
        else if (arr[cur] > key)
        {
            swap(&arr[cur], &arr[right]);
            right--;
        }
        else
        {
            cur++;
        }
    }
    quicksort(arr, le, left - 1);
    quicksort(arr, right + 1, ri);
}
