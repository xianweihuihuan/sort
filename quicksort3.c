void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int _quicksort(int *arr, int left, int right)
{
    int pcur = left;
    int prev = pcur + 1;
    int key = left;
    while (prev <= right)
    {
        if (arr[prev] < arr[key] && ++pcur != prev)
        {
            swap(&arr[prev], &arr[pcur]);
        }
        prev++;
    }
    swap(&arr[pcur], &arr[key]);
    return pcur;
}
void quicksort(int *arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int key = _quicksort(arr, left, right);
    quicksort(arr, left, key - 1);
    quicksort(arr, key + 1, right);
}
