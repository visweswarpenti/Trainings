using System;

namespace DataStructures.BinarySearchRecursionProj
{
    public class BinarySearchRecursionDemo
    {
        public int BinarySearchRecursion(int[] array, int low, int high, int key)
        {
            int mid;
            if (low <= high)
            {
                mid = (low + high) / 2;
                if (key == array[mid])
                    return mid;
                else if (key > array[mid])
                    return BinarySearchRecursion(array, mid + 1, high, key);
                else
                    return BinarySearchRecursion(array, low, mid - 1, key);
            }
            return -1;
        }
    }
}
