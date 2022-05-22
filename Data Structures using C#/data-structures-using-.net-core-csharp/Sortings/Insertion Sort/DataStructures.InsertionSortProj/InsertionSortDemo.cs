using System;

namespace DataStructures.InsertionSortProj
{
    public class InsertionSortDemo
    {
        public void InsertionSort(int[] a, int n)
        {
            int[] b= new int[20];
            int i, j;
            b[0] = a[0];
            for (i = 1; i < n; i++)
            {
                for (j = i - 1; a[i] < b[j] && j >= 0; j--)
                {
                    b[j + 1] = b[j];
                }
                b[j + 1] = a[i];
            }
            for (i = 0; i < n; i++)
                a[i] = b[i];
        }
    }
}
