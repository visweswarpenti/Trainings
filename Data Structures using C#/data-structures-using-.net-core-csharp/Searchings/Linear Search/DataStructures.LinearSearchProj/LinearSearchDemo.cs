using System;

namespace DataStructures.LinearSearchProj
{
    public class LinearSeachDemo
    {
        public int LinearSearch(int[] array, int arrayLength, int key)
        {
            int i;
            for (i = 0; i < arrayLength; i++)
            {
                if (array[i] == key)
                    return i;
            }

            return -1;
        }
    }
}