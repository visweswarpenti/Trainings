using System;

namespace DataStructures.BinarySearchProj
{
    public class BinarySearchDemo
    {
        public int BinarySearch(int[] array, int low, int high, int key)
        {
            int mid;
            while (low <= high)
            {
                mid = (low + high) / 2;
                if (key == array[mid])
                    return mid;
                else if (key > array[mid])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            return -1;
        }
    }
}
