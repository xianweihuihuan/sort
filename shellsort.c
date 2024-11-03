void Shellsort(int *arr, int n)
{
    int dop = n;
    while (dop > 1)
    {
        dop = dop / 3 + 1;
        for (int i = 0; i < n - dop; i++)
        {
            int end = i;
            int tmp = arr[end + dop];
            while (end >= 0)
            {
                if (arr[end] > tmp)
                {
                    arr[end + dop] = arr[end];
                    end -= dop;
                }
                else
                {
                    break;
                }
            }
            arr[end + dop] = tmp;
        }
    }
}
