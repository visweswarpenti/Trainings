using System;

namespace DataStructures.QuickSortProj
{
    public class QuickSortDemo
    {
        public void QuickSort(int[] array, int low, int high)
        {
            int p, i, j, t;
            if (low < high)
            {
                p = low;
                i = low;
                j = high;
                while (i <= j)
                {
                    while (i <= j && array[i] <= array[p]) // while(i <= high && array[i] <= array[p])
                    {
                        i++;
                    }
                    while (i <= j && array[j] > array[p])// while(j >= low && array[i] <= array[p])
                    {
                        j--;
                    }
                    if (i <= j)
                    {
                        t = array[i];
                        array[i] = array[j];
                        array[j] = t;
                    }
                }
                t = array[j];
                array[j] = array[p];
                array[p] = t;
                QuickSort(array, low, j - 1);   
                QuickSort(array, j + 1, high);
            }
        }
    }
}
