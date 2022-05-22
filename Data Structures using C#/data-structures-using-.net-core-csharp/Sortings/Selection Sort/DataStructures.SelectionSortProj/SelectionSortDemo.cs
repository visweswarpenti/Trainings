using System;

namespace DataStructures.SelectionSortProj
{
    public class SelectionSortDemo
    {
        public void SelectionSort(int[] array, int arrayLength)
        {
            int i, min, t, j;
            for (i = 0; i < arrayLength - 1; i++)
            {
                min = i;
                for (j = i + 1; j < arrayLength; j++)
                {
                    if (array[j] < array[min])
                    {
                        min = j;
                    }
                }
                t = array[min];
                array[min] = array[i];
                array[i] = t;
            }
        }
    }
}
