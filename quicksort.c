void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int _quicksort(int *arr, int left, int right)
{
    int key = left;
    left++;
    while (left <= right)
    {
        while (left <= right && arr[right] > arr[key])
        {
            right--;
        }
        while (left <= right && arr[left] < arr[key])
        {
            left++;
        }
        if (left <= right)
        {
            swap(&arr[left++], &arr[right--]);
        }
    }
    swap(&arr[key], &arr[right]);
    return right;
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
