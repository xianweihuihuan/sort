void _mergesirt(int *arr, int left, int right, int *tmp)
{
    if (left >= right)
    {
        return;
    }
    int mid = (left + right) / 2;
    _mergesirt(arr, left, mid, tmp);
    _mergesirt(arr, mid + 1, right, tmp);
    int begin1 = left;
    int end1 = mid;
    int begin2 = mid + 1;
    int end2 = right;
    int tc = begin1;
    while (begin1 <= end1 && begin2 <= end2)
    {
        if (arr[begin1] < arr[begin2])
        {
            tmp[tc++] = arr[begin1++];
        }
        else
        {
            tmp[tc++] = arr[begin2++];
        }
    }
    while (begin1 <= end1)
    {
        tmp[tc++] = arr[begin1++];
    }
    while (begin2 <= end2)
    {
        tmp[tc++] = arr[begin2++];
    }
    for (int i = left; i <= right; i++)
    {
        arr[i] = tmp[i];
    }
}
void mergesort(int *arr, int n)
{
    int *tmp = (int *)malloc(sizeof(int) * n);
    _mergesirt(arr, 0, n - 1, tmp);
    free(tmp);
}
