using System;

namespace DataStructures.BubbleSortProj
{
    public class BubbleSortDemo
    {
        public void BubbleSort(int[] array, int n)
        {
            int p, c, t, ex;
            for (p = 1; p <= n - 1; p++)
            {
                ex = 0;
                for (c = 0; c < n - p; c++)
                {
                    if (array[c] > array[c + 1])
                    {
                        ex = 1;
                        t = array[c];
                        array[c] = array[c + 1];
                        array[c + 1] = t;
                    }
                }
                if (ex == 0)
                    break;
            }
        }
    }
}
