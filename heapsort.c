void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void adjustup(int *arr, int child)
{
    int parent = (child - 1) / 2;
    while (child > 0)
    {
        if (arr[child] > arr[parent])
        {
            swap(&arr[child], &arr[parent]);
            child = parent;
            parent = (child - 1) / 2;
        }
        else
        {
            break;
        }
    }
}

void adjustdown(int *arr, int parent, int n)
{
    int child = parent * 2 + 1;
    while (child < n)
    {
        if (child + 1 < n && arr[child] < arr[child + 1])
        {
            child++;
        }
        if (arr[child] > arr[parent])
        {
            swap(&arr[child], &arr[parent]);
            parent = child;
            child = parent * 2 + 1;
        }
        else
        {
            break;
        }
    }
}

void heapsortdown(int *arr, int n)
{
    int i = (n - 1 - 1) / 2;
    for (i; i >= 0; i--)
    {
        adjustdown(arr, i, n);
    }
    int end = n - 1;
    while (end > 0)
    {
        swap(&arr[0], arr[end]);
        adjustdown(arr, 0, end);
        end--;
    }
}

void heapsortup(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        adjustup(arr, i);
    }
    int end = n - 1;
    while (end > 0)
    {
        swap(&arr[0], &arr[end]);
        adjustdown(arr, 0, end);
        end--;
    }
}