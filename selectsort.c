void swap(int *a, int *b)
{
     int tmp = *a;
     *a = *b;
     *b = tmp;
}
void selectsort(int *arr, int n)
{
     int begin = 0;
     int end = n - 1;
     while (begin < end)
     {
          int maxi = begin;
          int mini = begin;
          for (int i = begin + 1; i <= end; i++)
          {
               if (arr[i] > arr[maxi])
               {
                    maxi = i;
               }
               if (arr[i] < arr[mini])
               {
                    mini = i;
               }
               if (maxi == begin)
               {
                    maxi = mini;
               }
          }
          swap(&arr[maxi], &arr[end]);
          swap(&arr[mini], &arr[begin]);
          begin++;
          end--;
     }
}