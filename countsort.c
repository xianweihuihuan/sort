void countsort(int *arr, int n)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int *tmp = (int *)malloc(sizeof(int) * (max - min + 1));
    memset(tmp, 0, sizeof(int) * (max - min + 1));
    for (int i = 0l; i < n; i++)
    {
        tmp[arr[i] - min]++;
    }
    int j = 0;
    for (int i = 0; i < max - min + 1; i++)
    {
        while (tmp[i])
        {
            arr[j++] = min + i;
            tmp[i]--;
        }
    }
}
