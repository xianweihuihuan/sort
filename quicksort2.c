int _quicksort(int *arr, int left, int right)
{
    int hole = left;
    int key = arr[hole];
    while (left < right)
    {
        while (left < right && arr[right] >= key)
        {
            right--;
        }
        arr[hole] = arr[right];
        hole = right;
        while (left < right && arr[left] <= key)
        {
            left++;
        }
        arr[hole] = arr[left];
        hole = left;
    }
    arr[hole] = key;
    return hole;
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
