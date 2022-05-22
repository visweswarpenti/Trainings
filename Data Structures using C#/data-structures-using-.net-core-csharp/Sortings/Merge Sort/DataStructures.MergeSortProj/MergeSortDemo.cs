using System;

namespace DataStructures.MergeSortProj
{
    public class MergeSortDemo
    {
        public void MergeSort(int[] a, int low, int high)
        {
            int mid;
            if (low < high)
            {
                mid = (low + high) / 2;
                MergeSort(a, low, mid);
                MergeSort(a, mid + 1, high);
                Merge(a, low, mid, high);
            }
        }
        private void Merge(int[] a, int low, int mid, int high)
        {
            int[] b = new int[20];
            int i, j, k;

            if (low < high)
            {
                i = low;
                j = mid + 1;
                k = low;
                while (i <= mid && j <= high)
                {
                    if (a[i] < a[j])
                    {
                        b[k] = a[i];
                        i++;
                        k++;
                    }
                    else
                    {
                        b[k] = a[j];
                        j++;
                        k++;
                    }
                }
                while (i <= mid)
                {
                    b[k] = a[i];
                    i++;
                    k++;
                }
                while (j <= high)
                {
                    b[k] = a[j];
                    j++;
                    k++;
                }
                for (i = low; i <= high; i++)
                    a[i] = b[i];
            }
        }
    }
}
