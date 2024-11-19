// 当数组内存在大量重复数据时，普通快速排序的时间复杂度会退化为O(n^2)，三路划分可以解决这个问题
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
